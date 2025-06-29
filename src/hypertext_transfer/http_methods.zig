const standard: type = @import("std");

// Hypertext Transfer Protocol Method Defintion
pub const HTTPMethod: type = []const u8;

// Hypertext Transfer Protocol Methods
pub const HTTP_CONNECT: [7]HTTPMethod = "CONNECT";
pub const HTTP_DELETE: [6]HTTPMethod = "DELETE";
pub const HTTP_GET: [3]HTTPMethod = "GET";
pub const HTTP_HEAD: [4]HTTPMethod = "HEAD";
pub const HTTP_OPTIONS: [7]HTTPMethod = "OPTIONS";
pub const HTTP_PATCH: [5]HTTPMethod = "PATCH";
pub const HTTP_POST: [4]HTTPMethod = "POST";
pub const HTTP_PUT: [3]HTTPMethod = "PUT";
pub const HTTP_TRACE: [5]HTTPMethod = "TRACE";

// Hypertext Transfer Protocol Method Vector
pub fn methods_vector() @Vector(9, HTTPMethod) {
    const http_methods: @Vector(9, HTTPMethod) = @Vector(9, HTTPMethod){
        HTTP_CONNECT,
        HTTP_DELETE,
        HTTP_GET,
        HTTP_HEAD,
        HTTP_OPTIONS,
        HTTP_PATCH,
        HTTP_POST,
        HTTP_PUT,
        HTTP_TRACE,
    };

    return http_methods;
}
