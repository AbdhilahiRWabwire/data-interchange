#include <vector>
#include "./http_methods.hh"

namespace hypertext_transfer {
    using namespace std;

    // Hypertext Transfer Protocol Method Vector
    vector<HttpMethod> methods_vector() {
        const vector<HttpMethod> methods = {
            HTTP_CONNECT,
            HTTP_DELETE,
            HTTP_GET,
            HTTP_HEAD,
            HTTP_OPTIONS,
            HTTP_PATCH,
            HTTP_POST,
            HTTP_PUT,
            HTTP_TRACE,
        };

        return methods;
    }
}
