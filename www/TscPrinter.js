var exec = require('cordova/exec');

exports.setupPrinter = function (args, success, error) {
    exec(success, error, 'TscPrinter', 'setupPrinter', args);
};

exports.connectPrinter = function (address, success, error) {
    exec(success, error, 'TscPrinter', 'connectPrinter', [address]);
};

exports.printBarCode = function (args, success, error) {
    exec(success, error, 'TscPrinter', 'printBarCode', args);
};

exports.printLabel = function (args, success, error) {
    exec(success, error, 'TscPrinter', 'printLabel', args);
};

exports.clearBuffer = function (args, success, error) {
    exec(success, error, 'TscPrinter', 'clearBuffer', args);
};

exports.closeConnection = function (args, success, error) {
    exec(success, error, 'TscPrinter', 'closeConnection', args);
};

exports.printerfont = function (args, success, error) {
    exec(success, error, 'TscPrinter', 'printerfont', args);
};

exports.printQrCode = function (args, success, error) {
    exec(success, error, 'TscPrinter', 'printQrCode', args);
};
exports.sendText = function (args, success, error) {
    exec(success, error, 'TscPrinter', 'sendText', args);
};

//exports.windowsfont = function (args, success, error) {
//    exec(success, error, 'TscPrinter', 'windowsfont', args);
//};

