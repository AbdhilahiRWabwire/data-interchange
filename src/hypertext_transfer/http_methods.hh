#ifndef HTTP_METHODS_HH
#define HTTP_METHODS_HH

#include <string>
#include <vector>

namespace hypertext_transfer {
    using namespace std;
    
    // Hypertext Transfer Protocol Method Defintion
    typedef string HttpMethod;

    // Hypertext Transfer Protocol Methods
    const HttpMethod HTTP_CONNECT = "CONNECT";
    const HttpMethod HTTP_DELETE = "DELETE";
    const HttpMethod HTTP_GET = "GET";
    const HttpMethod HTTP_HEAD = "HEAD";
    const HttpMethod HTTP_OPTIONS = "OPTIONS";
    const HttpMethod HTTP_PATCH = "PATCH";
    const HttpMethod HTTP_POST = "POST";
    const HttpMethod HTTP_PUT = "PUT";
    const HttpMethod HTTP_TRACE = "TRACE";

    // Hypertext Transfer Protocol Method Vector
    vector<HttpMethod> methods_vector();
}


#endif
