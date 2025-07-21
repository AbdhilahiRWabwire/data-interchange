#ifndef HTTP_MESSAGE_HH
#define HTTP_MESSAGE_HH

#include <string>
#include <vector>
#include "./http_headers.hh"
#include "./http_methods.hh"
#include "./http_security_directives.hh"
#include "./http_status_codes.hh"
#include "./http_versions.hh"


namespace hypertext_transfer {
    using namespace std;
    using namespace hypertext_transfer;

    
    
    // Hypertext Transfer Protocol Request Definition
    // Hypertext Transfer Protocol Body Generic Type Declaration
    template <typename HttpBody>
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
    // Hypertext Transfer Protocol Body Generic Type Declaration
    template <typename HttpBody>
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
    template <typename HttpBody>
    HttpRequest<HttpBody> request_message(HttpRequest<HttpBody> request);
    
    // Hypertext Transfer Protocol Response Message    
    template <typename HttpBody>
    HttpResponse<HttpBody> reponse_message(HttpResponse<HttpBody> response);
}


#endif
