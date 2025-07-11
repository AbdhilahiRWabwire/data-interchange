#include <vector>
#include "./http_security_directives.hh"

namespace hypertext_transfer {
    using namespace std;

    // Hypertext Transfer Protocol Content Security Policy Directive Vector
    vector<HttpSecurityDirective> security_directives_vector() {
        const vector<HttpSecurityDirective> security_directives = {
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
}