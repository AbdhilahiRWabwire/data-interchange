const standard: type = @import("std");
const hypertext_headers: type = @import("../http_headers.zig");
const hypertext_methods: type = @import("../http_methods.zig");
const hypertext_security: type = @import("../http_security_directives.zig");
const hypertext_status: type = @import("../http_status_codes.zig");
const hypertext_versions: type = @import("../http_versions.zig");

// Hypertext Transfer Protocol Body Definition
pub const HTTPBody: type = type;

// Hypertext Transfer Protocol Message Definition
pub const HypertextTransferMessage: type = struct {
    body: ?HTTPBody,
    headers: @Vector(96, hypertext_headers.HTTPHeader),
    method: hypertext_methods.HTTPMethod,
    security_directives: ?@Vector(24, hypertext_security.HTTPSecurityDirective),
    status_code: hypertext_status.HTTPStatusCode,
    status_text: hypertext_status.HTTPStatusText,
    version: hypertext_versions.HTTPVersion,
};
