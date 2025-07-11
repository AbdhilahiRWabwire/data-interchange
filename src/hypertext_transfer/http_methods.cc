const standard: type = @import("std");

// Hypertext Transfer Protocol Method Defintion
pub const HttpMethod: type = []const u8;

// Hypertext Transfer Protocol Methods
pub const HTTP_CONNECT: [7]HttpMethod = "CONNECT";
pub const HTTP_DELETE: [6]HttpMethod = "DELETE";
pub const HTTP_GET: [3]HttpMethod = "GET";
pub const HTTP_HEAD: [4]HttpMethod = "HEAD";
pub const HTTP_OPTIONS: [7]HttpMethod = "OPTIONS";
pub const HTTP_PATCH: [5]HttpMethod = "PATCH";
pub const HTTP_POST: [4]HttpMethod = "POST";
pub const HTTP_PUT: [3]HttpMethod = "PUT";
pub const HTTP_TRACE: [5]HttpMethod = "TRACE";

// Hypertext Transfer Protocol Method Vector
pub fn methods_vector() @Vector(9, HttpMethod) {
    const methods: @Vector(9, HttpMethod) = @Vector(9, HttpMethod){
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

    return methods;
}
