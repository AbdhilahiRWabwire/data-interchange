#include <vector>
#include "./http_headers.hh"
#include "./http_message.hh"
#include "./http_methods.hh"
#include "./http_security_directives.hh"
#include "./http_status_codes.hh"
#include "./http_versions.hh"

namespace hypertext_transfer {
    using namespace std;
    using namespace hypertext_transfer;

    // Hypertext Transfer Protocol Request Definition
    struct HttpRequest {
        HttpBody body;
        vector<HttpHeader> headers;
        HttpMethod method;
        string path;
        vector<HttpSecurityDirective> security_directives;
        HttpStatusCode status_code;
        HttpStatusText status_text;
        HttpVersion version;
    };

    // Hypertext Transfer Protocol Response Definition
    struct HttpResponse {
        HttpBody body;
        vector<HttpHeader> headers;
        HttpMethod method;
        vector<HttpSecurityDirective> security_directives;
        HttpStatusCode status_code;
        HttpStatusText status_text;
        HttpVersion version;
    };

    // Hypertext Transfer Protocol Request Message
    HttpRequest request_message(HttpRequest request) {
        return request;
    }

    // Hypertext Transfer Protocol Response Message
    HttpResponse reponse_message(HttpResponse response) {
        return response;
    }
}
