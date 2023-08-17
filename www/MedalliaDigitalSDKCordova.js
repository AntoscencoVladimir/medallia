var exec = require('cordova/exec');

module.exports = {
    logLevel: {
        OFF: "OFF",
        FATAL: "FATAL",
        ERROR: "ERROR",
        WARN: "WARN",
        INFO: "INFO",
        DEBUG: "DEBUG",
    },

    actionType: {
        ACCEPTED: "ACCEPTED",
        DECLINED: "DECLINED",
        DEFERRED: "DEFERRED",
        SKIPPED: "SKIPPED",
    },

    init: function (token, success, error) {
        exec(success, error, "MedalliaDigitalSDKCordova", "sdkInit", [token]);
    },
    setCustomParameter: function (name, value) {
        exec(null, null, "MedalliaDigitalSDKCordova", "setCustomParameter", [
            name,
            value,
        ]);
    },
    setCustomParameters: function (parameters) {
        exec(null, null, "MedalliaDigitalSDKCordova", "setCustomParameters", [
            parameters,
        ]);
    },
    showForm: function (formId, success, error) {
        exec(success, error, "MedalliaDigitalSDKCordova", "showForm", [formId]);
    },
    handleNotification: function (formId, success, error) {
        exec(success, error, "MedalliaDigitalSDKCordova", "handleNotification", [
            formId,
        ]);
    },
    setCustomAppearance: function (appearance) {
        exec(null, null, "MedalliaDigitalSDKCordova", "setCustomAppearance", [appearance]);
    },
    closeEngagement: function (success, error) {
        exec(success, error, "MedalliaDigitalSDKCordova", "closeEngagement");
    },
    setDebugForm: function (debug) {
        exec(null, null, "MedalliaDigitalSDKCordova", "setDebugForm", [debug]);
    },
    setFormCallback: function (callback) {
        exec(callback, null, "MedalliaDigitalSDKCordova", "setFormCallback");
    },
    setFeedbackCallback: function (callback) {
        exec(callback, null, "MedalliaDigitalSDKCordova", "setFeedbackCallback");
    },
    setInvitationCallback: function (callback) {
        exec(callback, null, "MedalliaDigitalSDKCordova", "setInvitationCallback");
    },
    setCustomInterceptCallback: function (callback) {
        exec(callback, null, "MedalliaDigitalSDKCordova", "setCustomInterceptCallback");
    },
    enableIntercept: function () {
        exec(null, null, "MedalliaDigitalSDKCordova", "enableIntercept");
    },
    disableIntercept: function () {
        exec(null, null, "MedalliaDigitalSDKCordova", "disableIntercept");
    },
    setLogLevel: function (logLevel) {
        exec(null, null, "MedalliaDigitalSDKCordova", "setLogLevel", [logLevel]);
    },
    stopSDK: function (clearData) {
        exec(null, null, "MedalliaDigitalSDKCordova", "stopSDK", [clearData]);
    },
    revertStopSDK: function () {
        exec(null, null, "MedalliaDigitalSDKCordova", "revertStopSDK");
    },
    updateCustomLocale: function (locale, success, error) {
        exec(success, error, "MedalliaDigitalSDKCordova", "updateCustomLocale", [
            locale,
        ]);
    },
    customInterceptTrigger: function (engagementId, actionType, error) {
        exec(null, error, "MedalliaDigitalSDKCordova", "customInterceptTrigger", [
            engagementId,
            actionType,
        ]);
    },
    setUserId: function (userId) {
        exec(null, null, "MedalliaDigitalSDKCordova", "setUserId", [userId]);
    }
};
