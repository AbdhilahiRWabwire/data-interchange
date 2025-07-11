#ifndef HTTP_VERSIONS_HH
#define HTTP_VERSIONS_HH

#include <string>
#include <vector>

namespace hypertext_transfer {
    using namespace std;

    // Hypertext Transfer Protocol Version Definition
    typedef string HttpVersion;

    // Hypertext Transfer Protocol Versions
    const HttpVersion HTTP_VERSION_ONE = "HTTP/1.1";
    const HttpVersion HTTP_VERSION_TWO = "HTTP/2.0";
    const HttpVersion HTTP_VERSION_THREE = "HTTP/3.0";

    // Hypertext Transfer Protocol Version Vector
    vector<HttpVersion> versions_vector();
}

#endif
