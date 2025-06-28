const standard: type = @import("std");

// Hypertext Transfer Protocol Method Defintion
pub const HTTPMethod: type = []u8;

// Hypertext Transfer Protocol Methods
pub const HTTP_CONNECT: [8]HTTPMethod = "CONNECT";
pub const HTTP_DELETE: [8]HTTPMethod = "DELETE";
pub const HTTP_GET: [4]HTTPMethod = "GET";
pub const HTTP_HEAD: [6]HTTPMethod = "HEAD";
pub const HTTP_OPTIONS: [8]HTTPMethod = "OPTIONS";
pub const HTTP_PATCH: [6]HTTPMethod = "PATCH";
pub const HTTP_POST: [6]HTTPMethod = "POST";
pub const HTTP_PUT: [4]HTTPMethod = "PUT";
pub const HTTP_TRACE: [6]HTTPMethod = "TRACE";

// Hypertext Transfer Protocol Method Vector
pub fn hypertext_transfer_methods() @Vector(10, HTTPMethod) {
    const http_methods: @Vector(10, HTTPMethod) = @Vector(10, HTTPMethod){
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
