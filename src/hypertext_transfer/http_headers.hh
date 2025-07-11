#ifndef HTTP_HEADERS_HH
#define HTTP_HEADERS_HH

#include <string>
#include <vector>

namespace hypertext_transfer {
    using namespace std;

    // Hypertext Transfer Protocol Header Definition
    typedef string HttpHeader;

    // Hypertext Transfer Protocol Headers
    const HttpHeader HTTP_ACCEPT = "Accept";
    const HttpHeader HTTP_ACCEPT_CLIENT_HINT = "Accept-CH";
    const HttpHeader HTTP_ACCEPT_ENCODING = "Accept-Encoding";
    const HttpHeader HTTP_ACCEPT_LANGUAGE = "Accept-Language";
    const HttpHeader HTTP_ACCEPT_PATCH = "Accept-Patch";
    const HttpHeader HTTP_ACCEPT_POST = "Accept-Post";
    const HttpHeader HTTP_ACCEPT_RANGES = "Accept-Ranges";
    const HttpHeader HTTP_ACCESS_CONTROL_ALLOW_CREDENTIALS = "Access-Control-Allow-Credentials";
    const HttpHeader HTTP_ACCESS_CONTROL_ALLOW_HEADERS = "Access-Control-Allow-Headers";
    const HttpHeader HTTP_ACCESS_CONTROL_ALLOW_METHODS = "Access-Control-Allow-Methods";
    const HttpHeader HTTP_ACCESS_CONTROL_ALLOW_ORIGIN = "Access-Control-Allow-Origin";
    const HttpHeader HTTP_ACCESS_CONTROL_EXPOSE_HEADERS = "Access-Control-Expose-Headers";
    const HttpHeader HTTP_ACCESS_CONTROL_MAX_AGE = "Access-Control-Max-Age";
    const HttpHeader HTTP_ACCESS_CONTROL_REQUEST_HEADERS = "Access-Control-Request-Headers";
    const HttpHeader HTTP_ACCESS_CONTROL_REQUEST_METHOD = "Access-Control-Request-Method";
    const HttpHeader HTTP_AGE = "Age";
    const HttpHeader HTTP_ALLOW = "Allow";
    const HttpHeader HTTP_ALTERNATIVE_SERVICE = "Alt-Svc";
    const HttpHeader HTTP_ALTERNATIVE_USED = "Alt-Used";
    const HttpHeader HTTP_AUTHORIZATION = "Authorization";
    const HttpHeader HTTP_CACHE_CONTROL = "Cache-Control";
    const HttpHeader HTTP_CLEAR_SITE_DATA = "Clear-Site-Data";
    const HttpHeader HTTP_CONNECTION = "Connection";
    const HttpHeader HTTP_CONTENT_DIGEST = "Content-Digest";
    const HttpHeader HTTP_CONTENT_DISPOSITION = "Content-Disposition";
    const HttpHeader HTTP_CONTENT_ENCODING = "Content-Encoding";
    const HttpHeader HTTP_CONTENT_LANGUAGE = "Content-Language";
    const HttpHeader HTTP_CONTENT_LENGTH = "Content-Length";
    const HttpHeader HTTP_CONTENT_LOCATION = "Content-Location";
    const HttpHeader HTTP_CONTENT_RANGE = "Content-Range";
    const HttpHeader HTTP_CONTENT_SECURITY_POLICY = "Content-Security-Policy";
    const HttpHeader HTTP_CONTENT_SECURITY_POLICY_REPORT_ONLY = "Content-Security-Policy-Report-Only";
    const HttpHeader HTTP_CONTENT_TYPE = "Content-Type";
    const HttpHeader HTTP_COOKIE = "Cookie";
    const HttpHeader HTTP_CROSS_ORIGIN_EMBEDDER_POLICY = "Cross-Origin-Embedder-Policy";
    const HttpHeader HTTP_CROSS_ORIGIN_OPENER_POLICY = "Cross-Origin-Opener-Policy";
    const HttpHeader HTTP_CROSS_ORIGIN_RESOURCE_POLICY = "Cross-Origin-Resource-Policy";
    const HttpHeader HTTP_DATE = "Date";
    const HttpHeader HTTP_DEVICE_MEMORY = "Device-Memory";
    const HttpHeader HTTP_ENTITY_TAG = "ETag";
    const HttpHeader HTTP_EXPECT = "Expect";
    const HttpHeader HTTP_EXPIRES = "Expires";
    const HttpHeader HTTP_FORWARDED = "Forwarded";
    const HttpHeader HTTP_FROM = "From";
    const HttpHeader HTTP_HOST = "Host";
    const HttpHeader HTTP_IF_MATCH = "If-Match";
    const HttpHeader HTTP_IF_MODIFIED_SINCE = "If-Modified-Since";
    const HttpHeader HTTP_IF_NONE_MATCH = "If-None-Match";
    const HttpHeader HTTP_IF_RANGE = "If-Range";
    const HttpHeader HTTP_IF_UNMODIFIED_SINCE = "If-Unmodified-Since";
    const HttpHeader HTTP_KEEP_ALIVE = "Keep-Alive";
    const HttpHeader HTTP_LAST_MODIFIED = "Last-Modified";
    const HttpHeader HTTP_LINK = "Link";
    const HttpHeader HTTP_LOCATION = "Location";
    const HttpHeader HTTP_MAXIMUM_FORWARDS = "Max-Forwards";
    const HttpHeader HTTP_ORIGIN = "Origin";
    const HttpHeader HTTP_PRIORITY = "Priority";
    const HttpHeader HTTP_PROXY_AUTHENTICATION = "Proxy-Authenticate";
    const HttpHeader HTTP_PROXY_AUTHORIZATION = "Proxy-Authorization";
    const HttpHeader HTTP_RANGE = "Range";
    const HttpHeader HTTP_REFERER = "Referer";
    const HttpHeader HTTP_REFERRER_POLICY = "Referrer-Policy";
    const HttpHeader HTTP_REFRESH = "Refresh";
    const HttpHeader HTTP_REPR_DIGEST = "Repr-Digest";
    const HttpHeader HTTP_RETRY_AFTER = "Retry-After";
    const HttpHeader HTTP_SECURE_FETCH_DESTINATION = "Sec-Fetch-Dest";
    const HttpHeader HTTP_SECURE_FETCH_MODE = "Sec-Fetch-Mode";
    const HttpHeader HTTP_SECURE_FETCH_SITE = "Sec-Fetch-Site";
    const HttpHeader HTTP_SECURE_FETCH_USER = "Sec-Fetch-User";
    const HttpHeader HTTP_SECURE_PURPOSE = "Sec-Purpose";
    const HttpHeader HTTP_SECURE_WEBSOCKET_ACCEPT = "Sec-WebSocket-Accept";
    const HttpHeader HTTP_SECURE_WEBSOCKET_EXTENTIONS = "Sec-WebSocket-Extensions";
    const HttpHeader HTTP_SECURE_WEBSOCKET_KEY = "Sec-WebSocket-Key";
    const HttpHeader HTTP_SECURE_WEBSOCKET_PROTOCOL = "Sec-WebSocket-Protocol";
    const HttpHeader HTTP_SECURE_WEBSOCKET_VERSION = "Sec-WebSocket-Version";
    const HttpHeader HTTP_SERVER = "Server";
    const HttpHeader HTTP_SERVER_TIMING = "Server-Timing";
    const HttpHeader HTTP_SERVICE_WORKER = "Service-Worker";
    const HttpHeader HTTP_SERVICE_WORKER_ALLOWED = "Service-Worker-Allowed";
    const HttpHeader HTTP_SERVICE_WORKER_NAVIGATION_PRELOAD = "Service-Worker-Navigation-Preload";
    const HttpHeader HTTP_SET_COOKIE = "Set-Cookie";
    const HttpHeader HTTP_SOURCEMAP = "SourceMap";
    const HttpHeader HTTP_STRICT_TRANSPORT_SECURITY = "Strict-Transport-Security";
    const HttpHeader HTTP_TRANSFER_ENCODING_TYPE = "TE";
    const HttpHeader HTTP_TIMING_ALLOW_ORIGIN = "Timing-Allow-Origin";
    const HttpHeader HTTP_TRAILER = "Trailer";
    const HttpHeader HTTP_TRANSFER_ENCODING = "Transfer-Encoding";
    const HttpHeader HTTP_UPGRADE = "Upgrade";
    const HttpHeader HTTP_UPGRADE_INSECURE_REQUESTS = "Upgrade-Insecure-Requests";
    const HttpHeader HTTP_USER_AGENT = "User-Agent";
    const HttpHeader HTTP_VARY = "Vary";
    const HttpHeader HTTP_VIA_PROXY = "Via";
    const HttpHeader HTTP_WANT_CONTENT_DIGEST = "Want-Content-Digest";
    const HttpHeader HTTP_WANT_REPRESENTATION_DIGEST = "Want-Repr-Digest";
    const HttpHeader HTTP_WWW_AUTHENTICATE = "WWW-Authenticate";
    const HttpHeader HTTP_X_CONTENT_TYPE_OPTIONS = "X-Content-Type-Options";
    const HttpHeader HTTP_X_FRAME_OPTIONS = "X-Frame-Options";

    // Hypertext Transfer Protocol Header Vector
    vector<HttpHeader> headers_vector();
}

#endif
