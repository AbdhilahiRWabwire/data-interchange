#ifndef HTTP_STATUS_CODES_HH
#define HTTP_STATUS_CODES_HH

#include <string>
#include <unordered_map>

namespace hypertext_transfer {
    using namespace std;

    // Hypertext Transfer Protocol Status Code Definition
    typedef string HttpStatusCode;

    // Hypertext Transfer Protocol Status Text Definition
    typedef string HttpStatusText;

    // Hypertext Transfer Protocol Status Codes
    const HttpStatusCode HTTP_ONE_HUNDRED = "100";
    const HttpStatusCode HTTP_ONE_HUNDRED_ONE = "101";
    const HttpStatusCode HTTP_ONE_HUNDRED_TWO = "102";
    const HttpStatusCode HTTP_ONE_HUNDRED_THREE = "103";
    const HttpStatusCode HTTP_TWO_HUNDRED = "200";
    const HttpStatusCode HTTP_TWO_HUNDRED_ONE = "201";
    const HttpStatusCode HTTP_TWO_HUNDRED_TWO = "202";
    const HttpStatusCode HTTP_TWO_HUNDRED_THREE = "203";
    const HttpStatusCode HTTP_TWO_HUNDRED_FOUR = "204";
    const HttpStatusCode HTTP_TWO_HUNDRED_FIVE = "205";
    const HttpStatusCode HTTP_TWO_HUNDRED_SIX = "206";
    const HttpStatusCode HTTP_TWO_HUNDRED_SEVEN = "207";
    const HttpStatusCode HTTP_TWO_HUNDRED_EIGHT = "208";
    const HttpStatusCode HTTP_TWO_HUNDRED_TWENTY_SIX = "226";
    const HttpStatusCode HTTP_THREE_HUNDRED = "300";
    const HttpStatusCode HTTP_THREE_HUNDRED_ONE = "301";
    const HttpStatusCode HTTP_THREE_HUNDRED_TWO = "302";
    const HttpStatusCode HTTP_THREE_HUNDRED_THREE = "303";
    const HttpStatusCode HTTP_THREE_HUNDRED_FOUR = "304";
    const HttpStatusCode HTTP_THREE_HUNDRED_SEVEN = "307";
    const HttpStatusCode HTTP_THREE_HUNDRED_EIGHT = "308";
    const HttpStatusCode HTTP_FOUR_HUNDRED = "400";
    const HttpStatusCode HTTP_FOUR_HUNDRED_ONE = "401";
    const HttpStatusCode HTTP_FOUR_HUNDRED_TWO = "402";
    const HttpStatusCode HTTP_FOUR_HUNDRED_THREE = "403";
    const HttpStatusCode HTTP_FOUR_HUNDRED_FOUR = "404";
    const HttpStatusCode HTTP_FOUR_HUNDRED_FIVE = "405";
    const HttpStatusCode HTTP_FOUR_HUNDRED_SIX = "406";
    const HttpStatusCode HTTP_FOUR_HUNDRED_SEVEN = "407";
    const HttpStatusCode HTTP_FOUR_HUNDRED_EIGHT = "408";
    const HttpStatusCode HTTP_FOUR_HUNDRED_NINE = "409";
    const HttpStatusCode HTTP_FOUR_HUNDRED_TEN = "410";
    const HttpStatusCode HTTP_FOUR_HUNDRED_ELEVEN = "411";
    const HttpStatusCode HTTP_FOUR_HUNDRED_TWELVE = "412";
    const HttpStatusCode HTTP_FOUR_HUNDRED_THIRTEEN = "413";
    const HttpStatusCode HTTP_FOUR_HUNDRED_FOURTEEN = "414";
    const HttpStatusCode HTTP_FOUR_HUNDRED_FIFTEEN = "415";
    const HttpStatusCode HTTP_FOUR_HUNDRED_SIXTEEN = "416";
    const HttpStatusCode HTTP_FOUR_HUNDRED_SEVENTEEN = "417";
    const HttpStatusCode HTTP_FOUR_HUNDRED_EIGHTEEN = "418";
    const HttpStatusCode HTTP_FOUR_HUNDRED_TWENTY_ONE = "421";
    const HttpStatusCode HTTP_FOUR_HUNDRED_TWENTY_TWO = "422";
    const HttpStatusCode HTTP_FOUR_HUNDRED_TWENTY_THREE = "423";
    const HttpStatusCode HTTP_FOUR_HUNDRED_TWENTY_FOUR = "424";
    const HttpStatusCode HTTP_FOUR_HUNDRED_TWENTY_FIVE = "425";
    const HttpStatusCode HTTP_FOUR_HUNDRED_TWENTY_SIX = "426";
    const HttpStatusCode HTTP_FOUR_HUNDRED_TWENTY_EIGHT = "428";
    const HttpStatusCode HTTP_FOUR_HUNDRED_TWENTY_NINE = "429";
    const HttpStatusCode HTTP_FOUR_HUNDRED_THIRTY_ONE = "431";
    const HttpStatusCode HTTP_FOUR_HUNDRED_FIFTEY_ONE = "451";
    const HttpStatusCode HTTP_FIVE_HUNDRED = "500";
    const HttpStatusCode HTTP_FIVE_HUNDRED_ONE = "501";
    const HttpStatusCode HTTP_FIVE_HUNDRED_TWO = "502";
    const HttpStatusCode HTTP_FIVE_HUNDRED_THREE = "503";
    const HttpStatusCode HTTP_FIVE_HUNDRED_FOUR = "504";
    const HttpStatusCode HTTP_FIVE_HUNDRED_FIVE = "505";
    const HttpStatusCode HTTP_FIVE_HUNDRED_SIX = "506";
    const HttpStatusCode HTTP_FIVE_HUNDRED_SEVEN = "507";
    const HttpStatusCode HTTP_FIVE_HUNDRED_EIGHT = "508";
    const HttpStatusCode HTTP_FIVE_HUNDRED_TEN = "510";
    const HttpStatusCode HTTP_FIVE_HUNDRED_ELEVEN = "511";

    // Hypertext Transfer Protocol Status Texts
    const HttpStatusText HTTP_CONTINUE = "Continue";
    const HttpStatusText HTTP_SWITCHING_PROTOCOLS = "Switching Protocols";
    const HttpStatusText HTTP_PROCESSING = "Processing";
    const HttpStatusText HTTP_EARLY_HINTS = "Early Hints";
    const HttpStatusText HTTP_OK = "OK";
    const HttpStatusText HTTP_CREATED = "Created";
    const HttpStatusText HTTP_ACCEPTED = "Accepted";
    const HttpStatusText HTTP_NON_AUTHORITATIVE_INFORMATION = "Non-Authoritative Information";
    const HttpStatusText HTTP_NO_CONTENT = "No Content";
    const HttpStatusText HTTP_RESET_CONTENT = "Reset Content";
    const HttpStatusText HTTP_PARTIAL_CONTENT = "Partial Content";
    const HttpStatusText HTTP_MULTI_STATUS = "Multi-Status";
    const HttpStatusText HTTP_ALREADY_REPORTED = "Already Reported";
    const HttpStatusText HTTP_IM_USED = "IM Used";
    const HttpStatusText HTTP_MULTIPLE_CHOICES = "Multiple Choices";
    const HttpStatusText HTTP_MOVED_PERMANENTLY = "Moved Permanently";
    const HttpStatusText HTTP_FOUND = "Found";
    const HttpStatusText HTTP_SEE_OTHER = "See Other";
    const HttpStatusText HTTP_NOT_MODIFIED = "Not Modified";
    const HttpStatusText HTTP_TEMPORARY_REDIRECT = "Temporary Redirect";
    const HttpStatusText HTTP_PREMANENT_REDIRECT = "Permanent Redirect";
    const HttpStatusText HTTP_BAD_REQUEST = "Bad Request";
    const HttpStatusText HTTP_UNAUTHORIZED = "Unauthorized";
    const HttpStatusText HTTP_PAYMENT_REQUIRED = "Payment Required";
    const HttpStatusText HTTP_FORBIDDEN = "Forbidden";
    const HttpStatusText HTTP_NOT_FOUND = "Not Found";
    const HttpStatusText HTTP_METHOD_NOT_ALLOWED = "Method Not Allowed";
    const HttpStatusText HTTP_NOT_ACCEPTABLE = "Not Acceptable";
    const HttpStatusText HTTP_PROXY_AUTHENTICATION_REQUIRED = "Proxy Authentication Required";
    const HttpStatusText HTTP_REQUEST_TIMEOUT = "Request Timeout";
    const HttpStatusText HTTP_CONFLICT = "Conflict";
    const HttpStatusText HTTP_GONE = "Gone";
    const HttpStatusText HTTP_LENGTH_REQUIRED = "Length Required";
    const HttpStatusText HTTP_PRECONDITION_FAILED = "Precondition Failed";
    const HttpStatusText HTTP_CONTENT_TOO_LARGE = "Content Too Large";
    const HttpStatusText HTTP_URI_TOO_LONG = "URI Too Long";
    const HttpStatusText HTTP_UNSUPPORTED_MEDIA_TYPE = "Unsupported Media Type";
    const HttpStatusText HTTP_RANGE_NOT_SATISFIABLE = "Range Not Satisfiable";
    const HttpStatusText HTTP_EXPECTATION_FAILED = "Expectation Failed";
    const HttpStatusText HTTP_TEAPOT = "I'm a teapot";
    const HttpStatusText HTTP_MISDIRECTED_REQUEST = "Misdirected Request";
    const HttpStatusText HTTP_UNPROCESSABLE_CONTENT = "Unprocessable Content";
    const HttpStatusText HTTP_LOCKED = "Locked";
    const HttpStatusText HTTP_FAILED_DEPENDENCY = "Failed Dependency";
    const HttpStatusText HTTP_TOO_EARLY = "Too Early";
    const HttpStatusText HTTP_UPGRADE_REQUIRED = "Upgrade Required";
    const HttpStatusText HTTP_PRECONDITION_REQUIRED = "Precondition Required";
    const HttpStatusText HTTP_TOO_MANY_REQUESTS = "Too Many Requests";
    const HttpStatusText HTTP_REQUEST_HEADER_FIELDS_TOO_LARGE = "Request Header Fields Too Large";
    const HttpStatusText HTTP_UNAVAILABLE_FOR_LEGAL_REASONS = "Unavailable For Legal Reasons";
    const HttpStatusText HTTP_INTERNAL_SERVER_ERROR = "Internal Server Error";
    const HttpStatusText HTTP_NOT_IMPLEMENTED = "Not Implemented";
    const HttpStatusText HTTP_BAD_GATEWAY = "Bad Gateway";
    const HttpStatusText HTTP_SERVICE_UNAVAILABLE = "Service Unavailable";
    const HttpStatusText HTTP_GATEWAY_TIMEOUT = "Gateway Timeout";
    const HttpStatusText HTTP_VERSION_NOT_SUPPORTED = "HTTP Version Not Supported";
    const HttpStatusText HTTP_VARIANT_ALSO_NEGOTIATES = "Variant Also Negotiates";
    const HttpStatusText HTTP_INSUFFICENT_STORAGE = "Insufficient Storage";
    const HttpStatusText HTTP_LOOP_DETECTED = "Loop Detected";
    const HttpStatusText HTTP_NOT_EXTENDED = "Not Extended";
    const HttpStatusText HTTP_NETWORK_AUTHENTICATION_REQUIRED = "Network Authentication Required";

    // Hypertext Transfer Protocol Status Code and Status Text Hash Map
    unordered_map<HttpStatusCode, HttpStatusText> status_codes_map();
}

#endif
