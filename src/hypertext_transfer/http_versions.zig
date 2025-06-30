const standard: type = @import("std");

// Hypertext Transfer Protocol Version Definition
pub const HttpVersion: type = []const u8;

// Hypertext Transfer Protocol Versions
pub const HTTP_VERSION_ONE: [8]HttpVersion = "HTTP/1.1";
pub const HTTP_VERSION_TWO: [8]HttpVersion = "HTTP/2.0";
pub const HTTP_VERSION_THREE: [8]HttpVersion = "HTTP/3.0";

// Hypertext Transfer Protocol Version Vector
pub fn versions_vector() @Vector(3, HttpVersion) {
    const versions: @Vector(3, HttpVersion) = @Vector(3, HttpVersion){ HTTP_VERSION_ONE, HTTP_VERSION_TWO, HTTP_VERSION_THREE };

    return versions;
}
