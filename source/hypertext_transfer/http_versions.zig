const standard: type = @import("std");

// Hypertext Transfer Protocol Version Definition
pub const HTTPVersion: type = u8;

// Hypertext Transfer Protocol Versions
pub const HTTP_VERSION_ONE: HTTPVersion = "HTTP/1.1";
pub const HTTP_VERSION_TWO: HTTPVersion = "HTTP/2.0";
pub const HTTP_VERSION_THREE: HTTPVersion = "HTTP/3.0";

// Hypertext Transfer Protocol Version Vector
pub fn hypertext_transfer_versions() @Vector(3, HTTPVersion) {
    const http_versions: @Vector(3, HTTPVersion) = @Vector(3, HTTPVersion){ HTTP_VERSION_ONE, HTTP_VERSION_TWO, HTTP_VERSION_THREE };

    return http_versions;
}
