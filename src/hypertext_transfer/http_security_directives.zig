pub const standard: type = @import("std");

// Hypertext Transfer Protocol Content Security Policy Directive Definition
pub const HTTPSecurityDirective: type = []const u8;

// Hypertext Transfer Protocol Content Security Policy Directives
pub const HTTP_BASE_URI: [8]HTTPSecurityDirective = "base-uri";
pub const HTTP_CHILD_SOURCE: [9]HTTPSecurityDirective = "child-src";
pub const HTTP_CONNECT_SOURCE: [11]HTTPSecurityDirective = "connect-src";
pub const HTTP_DEFAULT_SOURCE: [11]HTTPSecurityDirective = "default-src";
pub const HTTP_FONT_SOURCE: [8]HTTPSecurityDirective = "font-src";
pub const HTTP_FORM_ACTION: [11]HTTPSecurityDirective = "form-action";
pub const HTTP_FRAME_ANCESTORS: [15]HTTPSecurityDirective = "frame-ancestors";
pub const HTTP_FRAME_SOURCE: [9]HTTPSecurityDirective = "frame-src";
pub const HTTP_IMAGE_SOURCE: [7]HTTPSecurityDirective = "img-src";
pub const HTTP_MANIFEST_SOURCE: [12]HTTPSecurityDirective = "manifest-src";
pub const HTTP_MEDIA_SOURCE: [9]HTTPSecurityDirective = "media-src";
pub const HTTP_OBJECT_SOURCE: [10]HTTPSecurityDirective = "object-src";
pub const HTTP_REPORT_TO: [9]HTTPSecurityDirective = "report-to";
pub const HTTP_REQUIRE_TRUSTED_TYPES_FOR: [25]HTTPSecurityDirective = "require-trusted-types-for";
pub const HTTP_SANDBOX: [7]HTTPSecurityDirective = "sandbox";
pub const HTTP_SCRIPT_SOURCE: [10]HTTPSecurityDirective = "script-src";
pub const HTTP_SCRIPT_SOURCE_ATTRIBUTE: [15]HTTPSecurityDirective = "script-src-attr";
pub const HTTP_SCRIPT_SOURCE_ELEMENT: [15]HTTPSecurityDirective = "script-src-elem";
pub const HTTP_STYLE_SOURCE: [9]HTTPSecurityDirective = "style-src";
pub const HTTP_STYLE_SOURCE_ATTRIBUTE: [14]HTTPSecurityDirective = "style-src-attr";
pub const HTTP_STYLE_SOURCE_ELEMENT: [14]HTTPSecurityDirective = "style-src-elem";
pub const HTTP_TRUSTED_TYPES: [13]HTTPSecurityDirective = "trusted-types";
pub const HTTP_UPGRADE_INSECURE_REQUESTS: [25]HTTPSecurityDirective = "upgrade-insecure-requests";
pub const HTTP_WORKER_SOURCE: [10]HTTPSecurityDirective = "worker-src";

// Hypertext Transfer Protocol Content Security Policy Directive Vector
pub fn security_directives_vector() @Vector(24, HTTPSecurityDirective) {
    const http_security_directives: @Vector(24, HTTPSecurityDirective) = @Vector(24, HTTPSecurityDirective){
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

    return http_security_directives;
}
