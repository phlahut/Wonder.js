module wd{
    declare var Math:any;

    export abstract class BasicTexture extends Texture implements ITextureAsset{
        protected p_sourceRegionMethod:ETextureSourceRegionMethod = null;
        get sourceRegionMethod(){
            return this.p_sourceRegionMethod;
        }
        set sourceRegionMethod(sourceRegionMethod:ETextureSourceRegionMethod){
            this.p_sourceRegionMethod = sourceRegionMethod;
        }

        private _sourceRegion:RectRegion = null;
        get sourceRegion(){
            if(this._sourceRegion && this.sourceRegionMethod === ETextureSourceRegionMethod.CHANGE_TEXCOORDS_IN_GLSL){
                return this._convertSourceRegionToUV(this._sourceRegion);
            }

            return RectRegion.create(0, 0, 1, 1);
        }
        set sourceRegion(sourceRegion:RectRegion){
            this._sourceRegion = sourceRegion;
        }

        public generateMipmaps:boolean = null;
        public format:ETextureFormat = null;
        public source:any = null;
        public repeatRegion:RectRegion = null;
        public sourceRegionMapping:ETextureSourceRegionMapping = null;
        public flipY:boolean = null;
        public premultiplyAlpha:boolean = null;
        public unpackAlignment:number = null;
        public type:ETextureType = null;
        public mipmaps:wdCb.Collection<any> = null;
        public anisotropy:number = null;
        public needUpdate:boolean = null;

        public initWhenCreate(...args){
            var gl = DeviceManager.getInstance().gl;
            //texture.addEventListener( "dispose", onTextureDispose );

            this.glTexture = gl.createTexture();

            //_this.info.memory.textures ++;
        }

        public init(){
        }

        public update(index:number){
            var gl = DeviceManager.getInstance().gl,
                isSourcePowerOfTwo = this.isSourcePowerOfTwo();

            this.bindToUnit(index);

            gl.pixelStorei(gl.UNPACK_FLIP_Y_WEBGL, this.flipY);


            //todo not set UNPACK_PREMULTIPLY_ALPHA_WEBGL,UNPACK_ALIGNMENT when cubemap?
            gl.pixelStorei(gl.UNPACK_PREMULTIPLY_ALPHA_WEBGL, this.premultiplyAlpha);
            gl.pixelStorei(gl.UNPACK_ALIGNMENT, this.unpackAlignment);

            if(this.needClampMaxSize()){
                this.clampToMaxSize();

                isSourcePowerOfTwo = this.isSourcePowerOfTwo();

                if(!isSourcePowerOfTwo){
                    Log.warn("texture size is not power of two after clampToMaxSize()");
                }
            }

            this.setTextureParameters( gl[this.target], isSourcePowerOfTwo);

            this.allocateSourceToTexture(isSourcePowerOfTwo);

            if (this.generateMipmaps && isSourcePowerOfTwo) {
                gl.generateMipmap(gl[this.target]);
            }

            this.needUpdate = false;

            return this;
        }

        public getSamplerName(unit:number){
            return this.getSamplerNameByVariableData(unit, EVariableType.SAMPLER_2D);
        }

        //todo optimize: if no need, not send these data
        //protected sendOtherData(program:Program, unit:number){
        //    //var sourceRegion = null;
        //    //
        //    //if(this.sourceRegion && this.sourceRegionMethod === ETextureSourceRegionMethod.CHANGE_TEXCOORDS_IN_GLSL){
        //    //    sourceRegion = this._convertSourceRegionToUV();
        //    //}
        //    //else{
        //    //    sourceRegion = RectRegion.create(0, 0, 1, 1);
        //    //}
        //    //program.sendUniformData("u_sourceRegion", EVariableType.FLOAT_4, sourceRegion);
        //    //
        //    //program.sendUniformData("u_repeatRegion", EVariableType.FLOAT_4, this.repeatRegion);
        //    //
        //    //return this;
        //}

        protected abstract allocateSourceToTexture(isSourcePowerOfTwo:boolean);

        @virtual
        protected needClampMaxSize(){
            if(!this.source){
                return false;
            }

            return BasicTextureUtils.needClampMaxSize(GPUDetector.getInstance().maxTextureSize, this.source.width, this.source.height);
        }

        protected clampToMaxSize(){
            this.source = BasicTextureUtils.clampToMaxSize(this.source, GPUDetector.getInstance().maxTextureSize);
        }

        protected setTextureParameters(textureType, isSourcePowerOfTwo){
            super.setTextureParameters(textureType, isSourcePowerOfTwo);

            this._setAnisotropy(textureType);
        }

        protected isSourcePowerOfTwo(){
            return BasicTextureUtils.isSourcePowerOfTwo(this.sourceRegion, this.sourceRegionMethod, this.width, this.height);
        }

        private _setAnisotropy(textureType){
            var gpu = GPUDetector.getInstance(),
                gl = DeviceManager.getInstance().gl;

            if(!gpu.extensionTextureFilterAnisotropic){
                return;
            }

            if (this.anisotropy > 1) {
                gl.texParameterf(textureType, gpu.extensionTextureFilterAnisotropic.TEXTURE_MAX_ANISOTROPY_EXT, Math.min(this.anisotropy, gpu.maxAnisotropy));
            }
        }

        private _convertSourceRegionCanvasMapToUV(sourceRegion:RectRegion){
            var width = this.width,
                height = this.height,
                region:RectRegion = null;

            region = RectRegion.create(
                sourceRegion.x / width,
                sourceRegion.y / height,
                sourceRegion.width / width,
                sourceRegion.height / height
            );

            region.y = 1 - region.y - region.height;

            return region;
        }

        //todo optimize: add dirty cache
        private _convertSourceRegionToUV(sourceRegion:RectRegion){
            if(this.sourceRegionMapping === ETextureSourceRegionMapping.CANVAS){
                return this._convertSourceRegionCanvasMapToUV(sourceRegion);
            }
            else if(this.sourceRegionMapping === ETextureSourceRegionMapping.UV){
                return sourceRegion;
            }
        }
    }
}

