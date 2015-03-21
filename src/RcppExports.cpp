// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// internal_split
List internal_split(std::list < std::vector < std::string > > requests, std::vector < std::string > names);
RcppExport SEXP webtools_internal_split(SEXP requestsSEXP, SEXP namesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::list < std::vector < std::string > > >::type requests(requestsSEXP);
    Rcpp::traits::input_parameter< std::vector < std::string > >::type names(namesSEXP);
    __result = Rcpp::wrap(internal_split(requests, names));
    return __result;
END_RCPP
}
// normalise_ips
std::vector < std::string > normalise_ips(std::vector < std::string > ip_addresses, std::vector < std::string > x_forwarded_fors);
RcppExport SEXP webtools_normalise_ips(SEXP ip_addressesSEXP, SEXP x_forwarded_forsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ip_addresses(ip_addressesSEXP);
    Rcpp::traits::input_parameter< std::vector < std::string > >::type x_forwarded_fors(x_forwarded_forsSEXP);
    __result = Rcpp::wrap(normalise_ips(ip_addresses, x_forwarded_fors));
    return __result;
END_RCPP
}
// decode_url
std::vector < std::string > decode_url(std::vector < std::string > urls);
RcppExport SEXP webtools_decode_url(SEXP urlsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type urls(urlsSEXP);
    __result = Rcpp::wrap(decode_url(urls));
    return __result;
END_RCPP
}
