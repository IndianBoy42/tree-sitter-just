module.exports = {
  "env": {
    "commonjs": true,
    "es2021": true,
  },
  // NOTE: eslint is deprecating its formatting rules so eslint-config-prettier
  // will not always be necessary.
  "extends": ["google", "prettier"],
  "overrides": [],
  "parserOptions": {
    "ecmaVersion": "latest",
    "sourceType": "module",
  },
  "rules": {
    "indent": ["error", 2, { "SwitchCase": 1 }],
    "max-len": [
      "error",
      {
        "code": 120,
        "ignoreComments": true,
        "ignoreUrls": true,
        "ignoreStrings": true,
      },
    ],
    "valid-jsdoc": 0,
  },
};
