const standard: type = @import("std");

// Hypertext Transfer Protocol Header Definition
pub const HttpHeader: type = []const u8;

// Hypertext Transfer Protocol Headers
pub const HTTP_ACCEPT: [6]HttpHeader = "Accept";
pub const HTTP_ACCEPT_CLIENT_HINT: [9]HttpHeader = "Accept-CH";
pub const HTTP_ACCEPT_ENCODING: [15]HttpHeader = "Accept-Encoding";
pub const HTTP_ACCEPT_LANGUAGE: [15]HttpHeader = "Accept-Language";
pub const HTTP_ACCEPT_PATCH: [12]HttpHeader = "Accept-Patch";
pub const HTTP_ACCEPT_POST: [11]HttpHeader = "Accept-Post";
pub const HTTP_ACCEPT_RANGES: [13]HttpHeader = "Accept-Ranges";
pub const HTTP_ACCESS_CONTROL_ALLOW_CREDENTIALS: [32]HttpHeader = "Access-Control-Allow-Credentials";
pub const HTTP_ACCESS_CONTROL_ALLOW_HEADERS: [28]HttpHeader = "Access-Control-Allow-Headers";
pub const HTTP_ACCESS_CONTROL_ALLOW_METHODS: [28]HttpHeader = "Access-Control-Allow-Methods";
pub const HTTP_ACCESS_CONTROL_ALLOW_ORIGIN: [27]HttpHeader = "Access-Control-Allow-Origin";
pub const HTTP_ACCESS_CONTROL_EXPOSE_HEADERS: [29]HttpHeader = "Access-Control-Expose-Headers";
pub const HTTP_ACCESS_CONTROL_MAX_AGE: [22]HttpHeader = "Access-Control-Max-Age";
pub const HTTP_ACCESS_CONTROL_REQUEST_HEADERS: [30]HttpHeader = "Access-Control-Request-Headers";
pub const HTTP_ACCESS_CONTROL_REQUEST_METHOD: [29]HttpHeader = "Access-Control-Request-Method";
pub const HTTP_AGE: [3]HttpHeader = "Age";
pub const HTTP_ALLOW: [5]HttpHeader = "Allow";
pub const HTTP_ALTERNATIVE_SERVICE: [7]HttpHeader = "Alt-Svc";
pub const HTTP_ALTERNATIVE_USED: [8]HttpHeader = "Alt-Used";
pub const HTTP_AUTHORIZATION: [13]HttpHeader = "Authorization";
pub const HTTP_CACHE_CONTROL: [13]HttpHeader = "Cache-Control";
pub const HTTP_CLEAR_SITE_DATA: [15]HttpHeader = "Clear-Site-Data";
pub const HTTP_CONNECTION: [10]HttpHeader = "Connection";
pub const HTTP_CONTENT_DIGEST: [14]HttpHeader = "Content-Digest";
pub const HTTP_CONTENT_DISPOSITION: [19]HttpHeader = "Content-Disposition";
pub const HTTP_CONTENT_ENCODING: [16]HttpHeader = "Content-Encoding";
pub const HTTP_CONTENT_LANGUAGE: [16]HttpHeader = "Content-Language";
pub const HTTP_CONTENT_LENGTH: [14]HttpHeader = "Content-Length";
pub const HTTP_CONTENT_LOCATION: [16]HttpHeader = "Content-Location";
pub const HTTP_CONTENT_RANGE: [13]HttpHeader = "Content-Range";
pub const HTTP_CONTENT_SECURITY_POLICY: [23]HttpHeader = "Content-Security-Policy";
pub const HTTP_CONTENT_SECURITY_POLICY_REPORT_ONLY: [35]HttpHeader = "Content-Security-Policy-Report-Only";
pub const HTTP_CONTENT_TYPE: [12]HttpHeader = "Content-Type";
pub const HTTP_COOKIE: [6]HttpHeader = "Cookie";
pub const HTTP_CROSS_ORIGIN_EMBEDDER_POLICY: [28]HttpHeader = "Cross-Origin-Embedder-Policy";
pub const HTTP_CROSS_ORIGIN_OPENER_POLICY: [26]HttpHeader = "Cross-Origin-Opener-Policy";
pub const HTTP_CROSS_ORIGIN_RESOURCE_POLICY: [28]HttpHeader = "Cross-Origin-Resource-Policy";
pub const HTTP_DATE: [4]HttpHeader = "Date";
pub const HTTP_DEVICE_MEMORY: [13]HttpHeader = "Device-Memory";
pub const HTTP_ENTITY_TAG: [4]HttpHeader = "ETag";
pub const HTTP_EXPECT: [6]HttpHeader = "Expect";
pub const HTTP_EXPIRES: [7]HttpHeader = "Expires";
pub const HTTP_FORWARDED: [9]HttpHeader = "Forwarded";
pub const HTTP_FROM: [4]HttpHeader = "From";
pub const HTTP_HOST: [4]HttpHeader = "Host";
pub const HTTP_IF_MATCH: [8]HttpHeader = "If-Match";
pub const HTTP_IF_MODIFIED_SINCE: [17]HttpHeader = "If-Modified-Since";
pub const HTTP_IF_NONE_MATCH: [13]HttpHeader = "If-None-Match";
pub const HTTP_IF_RANGE: [8]HttpHeader = "If-Range";
pub const HTTP_IF_UNMODIFIED_SINCE: [19]HttpHeader = "If-Unmodified-Since";
pub const HTTP_KEEP_ALIVE: [10]HttpHeader = "Keep-Alive";
pub const HTTP_LAST_MODIFIED: [13]HttpHeader = "Last-Modified";
pub const HTTP_LINK: [4]HttpHeader = "Link";
pub const HTTP_LOCATION: [8]HttpHeader = "Location";
pub const HTTP_MAXIMUM_FORWARDS: [12]HttpHeader = "Max-Forwards";
pub const HTTP_ORIGIN: [6]HttpHeader = "Origin";
pub const HTTP_PRIORITY: [8]HttpHeader = "Priority";
pub const HTTP_PROXY_AUTHENTICATION: [18]HttpHeader = "Proxy-Authenticate";
pub const HTTP_PROXY_AUTHORIZATION: [19]HttpHeader = "Proxy-Authorization";
pub const HTTP_RANGE: [5]HttpHeader = "Range";
pub const HTTP_REFERER: [7]HttpHeader = "Referer";
pub const HTTP_REFERRER_POLICY: [6]HttpHeader = "Referrer-Policy";
pub const HTTP_REFRESH: [7]HttpHeader = "Refresh";
pub const HTTP_REPR_DIGEST: [11]HttpHeader = "Repr-Digest";
pub const HTTP_RETRY_AFTER: [12]HttpHeader = "Retry-After";
pub const HTTP_SECURE_FETCH_DESTINATION: [14]HttpHeader = "Sec-Fetch-Dest";
pub const HTTP_SECURE_FETCH_MODE: [14]HttpHeader = "Sec-Fetch-Mode";
pub const HTTP_SECURE_FETCH_SITE: [14]HttpHeader = "Sec-Fetch-Site";
pub const HTTP_SECURE_FETCH_USER: [14]HttpHeader = "Sec-Fetch-User";
pub const HTTP_SECURE_PURPOSE: [11]HttpHeader = "Sec-Purpose";
pub const HTTP_SECURE_WEBSOCKET_ACCEPT: [20]HttpHeader = "Sec-WebSocket-Accept";
pub const HTTP_SECURE_WEBSOCKET_EXTENTIONS: [24]HttpHeader = "Sec-WebSocket-Extensions";
pub const HTTP_SECURE_WEBSOCKET_KEY: [17]HttpHeader = "Sec-WebSocket-Key";
pub const HTTP_SECURE_WEBSOCKET_PROTOCOL: [22]HttpHeader = "Sec-WebSocket-Protocol";
pub const HTTP_SECURE_WEBSOCKET_VERSION: [21]HttpHeader = "Sec-WebSocket-Version";
pub const HTTP_SERVER: [6]HttpHeader = "Server";
pub const HTTP_SERVER_TIMING: [13]HttpHeader = "Server-Timing";
pub const HTTP_SERVICE_WORKER: [14]HttpHeader = "Service-Worker";
pub const HTTP_SERVICE_WORKER_ALLOWED: [22]HttpHeader = "Service-Worker-Allowed";
pub const HTTP_SERVICE_WORKER_NAVIGATION_PRELOAD: [33]HttpHeader = "Service-Worker-Navigation-Preload";
pub const HTTP_SET_COOKIE: [10]HttpHeader = "Set-Cookie";
pub const HTTP_SOURCEMAP: [9]HttpHeader = "SourceMap";
pub const HTTP_STRICT_TRANSPORT_SECURITY: [25]HttpHeader = "Strict-Transport-Security";
pub const HTTP_TRANSFER_ENCODING_TYPE: [2]HttpHeader = "TE";
pub const HTTP_TIMING_ALLOW_ORIGIN: [19]HttpHeader = "Timing-Allow-Origin";
pub const HTTP_TRAILER: [7]HttpHeader = "Trailer";
pub const HTTP_TRANSFER_ENCODING: [17]HttpHeader = "Transfer-Encoding";
pub const HTTP_UPGRADE: [7]HttpHeader = "Upgrade";
pub const HTTP_UPGRADE_INSECURE_REQUESTS: [25]HttpHeader = "Upgrade-Insecure-Requests";
pub const HTTP_USER_AGENT: [10]HttpHeader = "User-Agent";
pub const HTTP_VARY: [4]HttpHeader = "Vary";
pub const HTTP_VIA_PROXY: [3]HttpHeader = "Via";
pub const HTTP_WANT_CONTENT_DIGEST: [19]HttpHeader = "Want-Content-Digest";
pub const HTTP_WANT_REPRESENTATION_DIGEST: [16]HttpHeader = "Want-Repr-Digest";
pub const HTTP_WWW_AUTHENTICATE: [16]HttpHeader = "WWW-Authenticate";
pub const HTTP_X_CONTENT_TYPE_OPTIONS: [22]HttpHeader = "X-Content-Type-Options";
pub const HTTP_X_FRAME_OPTIONS: [15]HttpHeader = "X-Frame-Options";

// Hypertext Transfer Protocol Header Vector
pub fn headers_vector() @Vector(97, HttpHeader) {
    const headers: @Vector(97, HttpHeader) = @Vector(97, HttpHeader){
        HTTP_ACCEPT,
        HTTP_ACCEPT_CLIENT_HINT,
        HTTP_ACCEPT_ENCODING,
        HTTP_ACCEPT_LANGUAGE,
        HTTP_ACCEPT_PATCH,
        HTTP_ACCEPT_POST,
        HTTP_ACCEPT_RANGES,
        HTTP_ACCESS_CONTROL_ALLOW_CREDENTIALS,
        HTTP_ACCESS_CONTROL_ALLOW_HEADERS,
        HTTP_ACCESS_CONTROL_ALLOW_METHODS,
        HTTP_ACCESS_CONTROL_ALLOW_ORIGIN,
        HTTP_ACCESS_CONTROL_EXPOSE_HEADERS,
        HTTP_ACCESS_CONTROL_MAX_AGE,
        HTTP_ACCESS_CONTROL_REQUEST_HEADERS,
        HTTP_ACCESS_CONTROL_REQUEST_METHOD,
        HTTP_AGE,
        HTTP_ALLOW,
        HTTP_ALTERNATIVE_SERVICE,
        HTTP_ALTERNATIVE_USED,
        HTTP_AUTHORIZATION,
        HTTP_CACHE_CONTROL,
        HTTP_CLEAR_SITE_DATA,
        HTTP_CONNECTION,
        HTTP_CONTENT_DIGEST,
        HTTP_CONTENT_DISPOSITION,
        HTTP_CONTENT_ENCODING,
        HTTP_CONTENT_LANGUAGE,
        HTTP_CONTENT_LENGTH,
        HTTP_CONTENT_LOCATION,
        HTTP_CONTENT_RANGE,
        HTTP_CONTENT_SECURITY_POLICY,
        HTTP_CONTENT_SECURITY_POLICY_REPORT_ONLY,
        HTTP_CONTENT_TYPE,
        HTTP_COOKIE,
        HTTP_CROSS_ORIGIN_EMBEDDER_POLICY,
        HTTP_CROSS_ORIGIN_OPENER_POLICY,
        HTTP_CROSS_ORIGIN_RESOURCE_POLICY,
        HTTP_DATE,
        HTTP_DEVICE_MEMORY,
        HTTP_ENTITY_TAG,
        HTTP_EXPECT,
        HTTP_EXPIRES,
        HTTP_FORWARDED,
        HTTP_FROM,
        HTTP_HOST,
        HTTP_IF_MATCH,
        HTTP_IF_MODIFIED_SINCE,
        HTTP_IF_NONE_MATCH,
        HTTP_IF_RANGE,
        HTTP_IF_UNMODIFIED_SINCE,
        HTTP_KEEP_ALIVE,
        HTTP_LAST_MODIFIED,
        HTTP_LINK,
        HTTP_LOCATION,
        HTTP_MAXIMUM_FORWARDS,
        HTTP_ORIGIN,
        HTTP_PRIORITY,
        HTTP_PROXY_AUTHENTICATION,
        HTTP_PROXY_AUTHORIZATION,
        HTTP_RANGE,
        HTTP_REFERER,
        HTTP_REFERRER_POLICY,
        HTTP_REFRESH,
        HTTP_REPR_DIGEST,
        HTTP_RETRY_AFTER,
        HTTP_SECURE_FETCH_DESTINATION,
        HTTP_SECURE_FETCH_MODE,
        HTTP_SECURE_FETCH_SITE,
        HTTP_SECURE_FETCH_USER,
        HTTP_SECURE_PURPOSE,
        HTTP_SECURE_WEBSOCKET_ACCEPT,
        HTTP_SECURE_WEBSOCKET_EXTENTIONS,
        HTTP_SECURE_WEBSOCKET_KEY,
        HTTP_SECURE_WEBSOCKET_PROTOCOL,
        HTTP_SECURE_WEBSOCKET_VERSION,
        HTTP_SERVER,
        HTTP_SERVER_TIMING,
        HTTP_SERVICE_WORKER,
        HTTP_SERVICE_WORKER_ALLOWED,
        HTTP_SERVICE_WORKER_NAVIGATION_PRELOAD,
        HTTP_SET_COOKIE,
        HTTP_SOURCEMAP,
        HTTP_STRICT_TRANSPORT_SECURITY,
        HTTP_TRANSFER_ENCODING_TYPE,
        HTTP_TIMING_ALLOW_ORIGIN,
        HTTP_TRAILER,
        HTTP_TRANSFER_ENCODING,
        HTTP_UPGRADE,
        HTTP_UPGRADE_INSECURE_REQUESTS,
        HTTP_USER_AGENT,
        HTTP_VARY,
        HTTP_VIA_PROXY,
        HTTP_WANT_CONTENT_DIGEST,
        HTTP_WANT_REPRESENTATION_DIGEST,
        HTTP_WWW_AUTHENTICATE,
        HTTP_X_CONTENT_TYPE_OPTIONS,
        HTTP_X_FRAME_OPTIONS,
    };

    return headers;
}
