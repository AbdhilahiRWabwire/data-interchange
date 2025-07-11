#include <vector>
#include "./http_versions.hh"

namespace hypertext_transfer {
    using namespace std;

    // Hypertext Transfer Protocol Version Vector
    vector<HttpVersion> versions_vector() {
        const vector<HttpVersion> versions = { 
            HTTP_VERSION_ONE, 
            HTTP_VERSION_TWO, 
            HTTP_VERSION_THREE
        };

        return versions;
    }
}