const standard: type = @import("std");
const headers: type = @import("./http_headers.zig");
const methods: type = @import("./http_methods.zig");
const security: type = @import("./http_security_directives.zig");
const status: type = @import("./http_status_codes.zig");
const versions: type = @import("./http_versions.zig");

// Hypertext Transfer Protocol Body Definition
pub const HTTPBody: type = type;

// Hypertext Transfer Protocol Request Definition
pub const HTTPRequest: type = struct {
    body: ?HTTPBody,
    headers: @Vector(97, headers.HTTPHeader),
    method: methods.HTTPMethod,
    path: []const u8,
    security_directives: ?@Vector(24, security.HTTPSecurityDirective),
    status_code: status.HTTPStatusCode,
    status_text: status.HTTPStatusText,
    version: versions.HTTPVersion,
};

// Hypertext Transfer Protocol Response Definition
pub const HTTPResponse: type = struct {
    body: ?HTTPBody,
    headers: @Vector(97, headers.HTTPHeader),
    method: methods.HTTPMethod,
    security_directives: ?@Vector(24, security.HTTPSecurityDirective),
    status_code: status.HTTPStatusCode,
    status_text: status.HTTPStatusText,
    version: versions.HTTPVersion,
};

// Hypertext Transfer Protocol Request Message
pub fn request_message(request: HTTPRequest, allocator: type) type {
    return type;
}

// Hypertext Transfer Protocol Response Message
pub fn reponse_message(response: HTTPResponse, allocator: type) type {
    return type;
}
