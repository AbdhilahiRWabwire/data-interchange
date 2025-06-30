const standard: type = @import("std");
const headers: type = @import("./http_headers.zig");
const methods: type = @import("./http_methods.zig");
const security: type = @import("./http_security_directives.zig");
const status: type = @import("./http_status_codes.zig");
const versions: type = @import("./http_versions.zig");

// Hypertext Transfer Protocol Body Definition
pub const HttpBody: type = type;

// Hypertext Transfer Protocol Request Definition
pub const HttpRequest: type = struct {
    body: ?HttpBody,
    headers: @Vector(97, headers.HttpHeader),
    method: methods.HttpMethod,
    path: []const u8,
    security_directives: ?@Vector(24, security.HttpSecurityDirective),
    status_code: status.HttpStatusCode,
    status_text: status.HttpStatusText,
    version: versions.HttpVersion,
};

// Hypertext Transfer Protocol Response Definition
pub const HttpResponse: type = struct {
    body: ?HttpBody,
    headers: @Vector(97, headers.HttpHeader),
    method: methods.HttpMethod,
    security_directives: ?@Vector(24, security.HttpSecurityDirective),
    status_code: status.HttpStatusCode,
    status_text: status.HttpStatusText,
    version: versions.HttpVersion,
};

// Hypertext Transfer Protocol Request Message
pub fn request_message(request: HttpRequest, allocator: type) type {
    return type;
}

// Hypertext Transfer Protocol Response Message
pub fn reponse_message(response: HttpResponse, allocator: type) type {
    return type;
}
