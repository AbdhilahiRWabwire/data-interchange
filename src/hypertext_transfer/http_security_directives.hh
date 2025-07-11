#ifndef HTTP_SECURITY_DIRECTIVES_HH
#define HTTP_SECURITY_DIRECTIVES_HH

#include <string>
#include <vector>

namespace hypertext_transfer {
    using namespace std;

    // Hypertext Transfer Protocol Content Security Policy Directive Definition
    typedef string HttpSecurityDirective;

    // Hypertext Transfer Protocol Content Security Policy Directives
    const HttpSecurityDirective HTTP_BASE_URI = "base-uri";
    const HttpSecurityDirective HTTP_CHILD_SOURCE = "child-src";
    const HttpSecurityDirective HTTP_CONNECT_SOURCE = "connect-src";
    const HttpSecurityDirective HTTP_DEFAULT_SOURCE = "default-src";
    const HttpSecurityDirective HTTP_FONT_SOURCE = "font-src";
    const HttpSecurityDirective HTTP_FORM_ACTION = "form-action";
    const HttpSecurityDirective HTTP_FRAME_ANCESTORS = "frame-ancestors";
    const HttpSecurityDirective HTTP_FRAME_SOURCE = "frame-src";
    const HttpSecurityDirective HTTP_IMAGE_SOURCE = "img-src";
    const HttpSecurityDirective HTTP_MANIFEST_SOURCE = "manifest-src";
    const HttpSecurityDirective HTTP_MEDIA_SOURCE = "media-src";
    const HttpSecurityDirective HTTP_OBJECT_SOURCE = "object-src";
    const HttpSecurityDirective HTTP_REPORT_TO = "report-to";
    const HttpSecurityDirective HTTP_REQUIRE_TRUSTED_TYPES_FOR = "require-trusted-types-for";
    const HttpSecurityDirective HTTP_SANDBOX = "sandbox";
    const HttpSecurityDirective HTTP_SCRIPT_SOURCE = "script-src";
    const HttpSecurityDirective HTTP_SCRIPT_SOURCE_ATTRIBUTE = "script-src-attr";
    const HttpSecurityDirective HTTP_SCRIPT_SOURCE_ELEMENT = "script-src-elem";
    const HttpSecurityDirective HTTP_STYLE_SOURCE = "style-src";
    const HttpSecurityDirective HTTP_STYLE_SOURCE_ATTRIBUTE = "style-src-attr";
    const HttpSecurityDirective HTTP_STYLE_SOURCE_ELEMENT = "style-src-elem";
    const HttpSecurityDirective HTTP_TRUSTED_TYPES = "trusted-types";
    const HttpSecurityDirective HTTP_UPGRADE_INSECURE_REQUESTS = "upgrade-insecure-requests";
    const HttpSecurityDirective HTTP_WORKER_SOURCE = "worker-src";

    // Hypertext Transfer Protocol Content Security Policy Directive Vector
    vector<HttpSecurityDirective> security_directives_vector();
}

#endif
