#include <string>
#include <vector>

using namespace std;

// Comment Token Defintion
typedef string CommentToken;

// Comment Tokens
const CommentToken BLOCK_TOKEN = "/*";
const CommentToken LINE_TOKEN = "//";
const CommentToken INNER_LINE_TOKEN = "//!";
const CommentToken INNER_BLOCK_TOKEN = "/*!";
const CommentToken OUTER_LINE_TOKEN = "///";
const CommentToken OUTER_BLOCK_TOKEN = "/**";
const CommentToken OCTOTHORPE_BLOCK_TOKEN = "#*";
const CommentToken OCTOTHORPE_LINE_TOKEN = "#";
const CommentToken OCTOTHROPE_INNER_LINE_TOKEN = "#!";
const CommentToken OCTOTHORPE_INNER_BLOCK_TOKEN = "#*!";
const CommentToken OCTOTHROPE_OUTER_LINE_TOKEN = "###";
const CommentToken OCTOTHORPE_OUTER_BLOCK_TOKEN = "#**";

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
