// Hypertext Transfer Protocol Cross-Origin Resource Sharing Errors
const httpResourceSharingErrors: [15]u8 = [15]u8 {
"CORS disabled",
"CORS header 'Access-Control-Allow-Origin' does not match 'xyz'",
"CORS header 'Access-Control-Allow-Origin' missing",
"CORS header 'Origin' cannot be added",
"CORS preflight channel did not succeed",
"CORS request did not succeed",
"CORS request external redirect not allowed",
"CORS request not HTTP",
"Credential is not supported if the CORS header 'Access-Control-Allow-Origin' is '*'",
"Did not find method in CORS header 'Access-Control-Allow-Methods'",
"expected 'true' in CORS header 'Access-Control-Allow-Credentials'",
"invalid token 'xyz' in CORS header 'Access-Control-Allow-Headers'",
"invalid token 'xyz' in CORS header 'Access-Control-Allow-Methods'",
"missing token 'xyz' in CORS header 'Access-Control-Allow-Headers' from CORS preflight channel",
"Multiple CORS header 'Access-Control-Allow-Origin' not allowed"
};