#ifndef COMMENT_TOKENS_HH
#define COMMENT_TOKENS_HH

#include <string>
#include <vector>

// Comment Token Defintion
typedef std::string CommentToken;

// Comment Tokens
const CommentToken BLOCK_TOKEN;
const CommentToken LINE_TOKEN;
const CommentToken INNER_LINE_TOKEN;
const CommentToken INNER_BLOCK_TOKEN;
const CommentToken OUTER_LINE_TOKEN;
const CommentToken OUTER_BLOCK_TOKEN;
const CommentToken OCTOTHORPE_BLOCK_TOKEN;
const CommentToken OCTOTHORPE_LINE_TOKEN;
const CommentToken OCTOTHROPE_INNER_LINE_TOKEN;
const CommentToken OCTOTHORPE_INNER_BLOCK_TOKEN;
const CommentToken OCTOTHROPE_OUTER_LINE_TOKEN;
const CommentToken OCTOTHORPE_OUTER_BLOCK_TOKEN;

// Comment Token Vector
std::vector<CommentToken> comments_vector();

#endif
