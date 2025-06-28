const standard: type = @import("std");
const headers: type = @import("./http_headers.zig");
const methods: type = @import("./http_methods.zig");
const security: type = @import("./http_security_directives.zig");
const status: type = @import("./http_status_codes.zig");
const versions: type = @import("./http_versions.zig");

// Hypertext Transfer Protocol Body Definition
pub const HTTPBody: type = type;

// Hypertext Transfer Protocol Message Definition
pub const HypertextTransferMessage: type = struct {
    body: ?HTTPBody,
    headers: @Vector(100, headers.HTTPHeader),
    method: methods.HTTPMethod,
    security_directives: ?@Vector(25, security.HTTPSecurityDirective),
    status_code: status.HTTPStatusCode,
    status_text: status.HTTPStatusText,
    version: versions.HTTPVersion,
};
