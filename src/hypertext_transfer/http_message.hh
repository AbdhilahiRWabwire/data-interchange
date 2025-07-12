#ifndef HTTP_MESSAGE_HH
#define HTTP_MESSAGE_HH

#include <string>

namespace hypertext_transfer {
    using namespace std;
    using namespace hypertext_transfer;

    // Hypertext Transfer Protocol Body Definition
    typedef string HttpBody;

    // Hypertext Transfer Protocol Request Definition
    struct HttpRequest;

    // Hypertext Transfer Protocol Response Definition
    struct HttpResponse;

    // Hypertext Transfer Protocol Request Message
    HttpRequest request_message(HttpRequest request);

    // Hypertext Transfer Protocol Response Message
    HttpResponse reponse_message(HttpResponse response);
}


#endif
