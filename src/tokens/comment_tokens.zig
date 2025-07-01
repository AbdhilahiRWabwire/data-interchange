const standard: type = @import("std");

// Comment Token Defintion
pub const CommentToken: type = []const u8;

// Comment Tokens
pub const BLOCK_COMMENT_TOKEN: [2]CommentToken = "/*";
pub const LINE_COMMENT_TOKEN: [2]CommentToken = "//";
pub const INNER_LINE_COMMENT_TOKEN: [3]CommentToken = "//!";
pub const INNER_BLOCK_COMMENT_TOKEN: [3]CommentToken = "/*!";
pub const OUTER_LINE_COMMENT_TOKEN: [3]CommentToken = "///";
pub const OUTER_BLOCK_COMMENT_TOKEN: [3]CommentToken = "/**";
pub const OCTOTHORPE_BLOCK_COMMENT_TOKEN: [2]CommentToken = "#*";
pub const OCTOTHORPE_LINE_COMMENT_TOKEN: [1]CommentToken = "#";
pub const OCTOTHROPE_INNER_LINE_COMMENT_TOKEN: [2]CommentToken = "#!";
pub const OCTOTHORPE_INNER_BLOCK_COMMENT_TOKEN: [3]CommentToken = "#*!";
pub const OCTOTHROPE_OUTER_LINE_COMMENT_TOKEN: [3]CommentToken = "###";
pub const OCTOTHORPE_OUTER_BLOCK_COMMENT_TOKEN: [3]CommentToken = "#**";

// Comment Token Vector
pub fn comments_vector() @Vector(12, CommentToken) {
    const comments: @Vector(12, CommentToken) = @Vector(12, CommentToken){
        BLOCK_COMMENT_TOKEN,
        LINE_COMMENT_TOKEN,
        INNER_LINE_COMMENT_TOKEN,
        INNER_BLOCK_COMMENT_TOKEN,
        OUTER_LINE_COMMENT_TOKEN,
        OUTER_BLOCK_COMMENT_TOKEN,
        OCTOTHORPE_BLOCK_COMMENT_TOKEN,
        OCTOTHORPE_LINE_COMMENT_TOKEN,
        OCTOTHROPE_INNER_LINE_COMMENT_TOKEN,
        OCTOTHORPE_INNER_BLOCK_COMMENT_TOKEN,
        OCTOTHROPE_OUTER_LINE_COMMENT_TOKEN,
        OCTOTHORPE_OUTER_BLOCK_COMMENT_TOKEN,
    };

    return comments;
}
