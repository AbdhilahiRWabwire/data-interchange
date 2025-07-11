pub const standard: type = @import("std");

// Hypertext Transfer Protocol Content Security Policy Directive Definition
pub const HttpSecurityDirective: type = []const u8;

// Hypertext Transfer Protocol Content Security Policy Directives
pub const HTTP_BASE_URI: [8]HttpSecurityDirective = "base-uri";
pub const HTTP_CHILD_SOURCE: [9]HttpSecurityDirective = "child-src";
pub const HTTP_CONNECT_SOURCE: [11]HttpSecurityDirective = "connect-src";
pub const HTTP_DEFAULT_SOURCE: [11]HttpSecurityDirective = "default-src";
pub const HTTP_FONT_SOURCE: [8]HttpSecurityDirective = "font-src";
pub const HTTP_FORM_ACTION: [11]HttpSecurityDirective = "form-action";
pub const HTTP_FRAME_ANCESTORS: [15]HttpSecurityDirective = "frame-ancestors";
pub const HTTP_FRAME_SOURCE: [9]HttpSecurityDirective = "frame-src";
pub const HTTP_IMAGE_SOURCE: [7]HttpSecurityDirective = "img-src";
pub const HTTP_MANIFEST_SOURCE: [12]HttpSecurityDirective = "manifest-src";
pub const HTTP_MEDIA_SOURCE: [9]HttpSecurityDirective = "media-src";
pub const HTTP_OBJECT_SOURCE: [10]HttpSecurityDirective = "object-src";
pub const HTTP_REPORT_TO: [9]HttpSecurityDirective = "report-to";
pub const HTTP_REQUIRE_TRUSTED_TYPES_FOR: [25]HttpSecurityDirective = "require-trusted-types-for";
pub const HTTP_SANDBOX: [7]HttpSecurityDirective = "sandbox";
pub const HTTP_SCRIPT_SOURCE: [10]HttpSecurityDirective = "script-src";
pub const HTTP_SCRIPT_SOURCE_ATTRIBUTE: [15]HttpSecurityDirective = "script-src-attr";
pub const HTTP_SCRIPT_SOURCE_ELEMENT: [15]HttpSecurityDirective = "script-src-elem";
pub const HTTP_STYLE_SOURCE: [9]HttpSecurityDirective = "style-src";
pub const HTTP_STYLE_SOURCE_ATTRIBUTE: [14]HttpSecurityDirective = "style-src-attr";
pub const HTTP_STYLE_SOURCE_ELEMENT: [14]HttpSecurityDirective = "style-src-elem";
pub const HTTP_TRUSTED_TYPES: [13]HttpSecurityDirective = "trusted-types";
pub const HTTP_UPGRADE_INSECURE_REQUESTS: [25]HttpSecurityDirective = "upgrade-insecure-requests";
pub const HTTP_WORKER_SOURCE: [10]HttpSecurityDirective = "worker-src";

// Hypertext Transfer Protocol Content Security Policy Directive Vector
pub fn security_directives_vector() @Vector(24, HttpSecurityDirective) {
    const security_directives: @Vector(24, HttpSecurityDirective) = @Vector(24, HttpSecurityDirective){
        HTTP_BASE_URI,
        HTTP_CHILD_SOURCE,
        HTTP_CONNECT_SOURCE,
        HTTP_DEFAULT_SOURCE,
        HTTP_FONT_SOURCE,
        HTTP_FORM_ACTION,
        HTTP_FRAME_ANCESTORS,
        HTTP_FRAME_SOURCE,
        HTTP_IMAGE_SOURCE,
        HTTP_MANIFEST_SOURCE,
        HTTP_MEDIA_SOURCE,
        HTTP_OBJECT_SOURCE,
        HTTP_REPORT_TO,
        HTTP_REQUIRE_TRUSTED_TYPES_FOR,
        HTTP_SANDBOX,
        HTTP_SCRIPT_SOURCE,
        HTTP_SCRIPT_SOURCE_ATTRIBUTE,
        HTTP_SCRIPT_SOURCE_ELEMENT,
        HTTP_STYLE_SOURCE,
        HTTP_STYLE_SOURCE_ATTRIBUTE,
        HTTP_STYLE_SOURCE_ELEMENT,
        HTTP_TRUSTED_TYPES,
        HTTP_UPGRADE_INSECURE_REQUESTS,
        HTTP_WORKER_SOURCE,
    };

    return security_directives;
}
