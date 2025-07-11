#include <vector>
#include "./comment_tokens.hh"

namespace tokens {
    using namespace std;
    
    // Comment Token Vector
    vector<CommentToken> comments_vector() {
        const vector<CommentToken> comments = {
            BLOCK_TOKEN,
            LINE_TOKEN,
            INNER_LINE_TOKEN,
            INNER_BLOCK_TOKEN,
            OUTER_LINE_TOKEN,
            OUTER_BLOCK_TOKEN,
            OCTOTHORPE_BLOCK_TOKEN,
            OCTOTHORPE_LINE_TOKEN,
            OCTOTHROPE_INNER_LINE_TOKEN,
            OCTOTHORPE_INNER_BLOCK_TOKEN,
            OCTOTHROPE_OUTER_LINE_TOKEN,
            OCTOTHORPE_OUTER_BLOCK_TOKEN,
        };
    
        return comments;
    }
}
