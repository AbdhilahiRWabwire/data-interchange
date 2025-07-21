#include "./http_message.hh"

namespace hypertext_transfer {
    using namespace std;
    using namespace hypertext_transfer;
    
    // Hypertext Transfer Protocol Request Message    
    template <typename HttpBody>
    HttpRequest<HttpBody> request_message(HttpRequest<HttpBody> request) {
        return request;
    }

    // Hypertext Transfer Protocol Response Message
    template <typename HttpBody>
    HttpResponse<HttpBody> reponse_message(HttpResponse<HttpBody> response) {
        return response;
    }
}
