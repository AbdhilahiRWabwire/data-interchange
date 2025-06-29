const standard: type = @import("std");

// Hypertext Transfer Protocol Version Definition
pub const HTTPVersion: type = [10]u8;

// Hypertext Transfer Protocol Versions
pub const HTTP_VERSION_ONE: HTTPVersion = "HTTP/1.1";
pub const HTTP_VERSION_TWO: HTTPVersion = "HTTP/2.0";
pub const HTTP_VERSION_THREE: HTTPVersion = "HTTP/3.0";

// Hypertext Transfer Protocol Version Vector
pub fn versions_vector() @Vector(4, HTTPVersion) {
    const http_versions: @Vector(4, HTTPVersion) = @Vector(4, HTTPVersion){ HTTP_VERSION_ONE, HTTP_VERSION_TWO, HTTP_VERSION_THREE };

    return http_versions;
}
