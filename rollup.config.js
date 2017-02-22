// import typescript from "wonder-rollup-plugin-typescript";
import nodeResolve from "rollup-plugin-node-resolve";
import commonjs from "rollup-plugin-commonjs";

export default {
    entry: "./dist/es2015/index.js",
    indent: "\t",
    plugins: [
        nodeResolve(
            {
            }),
        commonjs({
            // sourceMap: false,
            namedExports: {
                "./node_modules/bowser/src/bowser.js": ["version", "chrome","msie", "firefox", "mobile"],
                "./node_modules/wonder-expect.js/index.js": ["expect"]
            }
        })

        // typescript({
        //     tsconfig:false,
        //     typescript:require("typescript")
        // }),
        // commonjs({
        //     shouldExports: {
        //         // left-hand side can be an absolute path, a path
        //         // relative to the current directory, or the name
        //         // of a module in node_modules
        //         "node_modules/chai/index.js": ["should"]
        //     }
        // }),
    ],
    sourceMap: true,
    targets: [
        {
            format: "umd",
            moduleName: "wd",
            dest: "./dist/wd.js"
        },
        {
            format: "es",
            dest: "./dist/wd.module.js"
        }
    ]
};
