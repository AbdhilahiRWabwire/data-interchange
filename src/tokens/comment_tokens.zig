const standard: type = @import("std");

// Comment Token Defintion
pub const CommentToken: type = []const u8;

// Comment Tokens
pub const BLOCK_TOKEN: [2]CommentToken = "/*";
pub const LINE_TOKEN: [2]CommentToken = "//";
pub const INNER_LINE_TOKEN: [3]CommentToken = "//!";
pub const INNER_BLOCK_TOKEN: [3]CommentToken = "/*!";
pub const OUTER_LINE_TOKEN: [3]CommentToken = "///";
pub const OUTER_BLOCK_TOKEN: [3]CommentToken = "/**";
pub const OCTOTHORPE_BLOCK_TOKEN: [2]CommentToken = "#*";
pub const OCTOTHORPE_LINE_TOKEN: [1]CommentToken = "#";
pub const OCTOTHROPE_INNER_LINE_TOKEN: [2]CommentToken = "#!";
pub const OCTOTHORPE_INNER_BLOCK_TOKEN: [3]CommentToken = "#*!";
pub const OCTOTHROPE_OUTER_LINE_TOKEN: [3]CommentToken = "###";
pub const OCTOTHORPE_OUTER_BLOCK_TOKEN: [3]CommentToken = "#**";

// Comment Token Vector
pub fn comments_vector() @Vector(12, CommentToken) {
    const comments: @Vector(12, CommentToken) = @Vector(12, CommentToken){
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
