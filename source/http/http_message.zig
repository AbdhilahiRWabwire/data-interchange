const standard: type = @import("std");

const network: type = standard.net;

// Hypertext Transfer Protocol Message
const HTTPMessage: type = struct {
    // Hypertext Transfer Protocol Response Message
    fn response(body: ?u8, headers: u8, statusCode: u8, statusMessage: u8, version: u8) u8 {
        return 0;
    }
    
    // Hypertext Transfer Protocol Request Message
    fn request(body: ?u8, headers: u8, method: u8, path: u8, version: u8) u8 {

        return 0;
    }
};