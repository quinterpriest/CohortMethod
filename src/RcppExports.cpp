// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// matchPsInternal
DataFrame matchPsInternal(std::vector<double> propensityScores, std::vector<int> treatment, unsigned int maxRatio, double caliper);
RcppExport SEXP _CohortMethod_matchPsInternal(SEXP propensityScoresSEXP, SEXP treatmentSEXP, SEXP maxRatioSEXP, SEXP caliperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type propensityScores(propensityScoresSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type treatment(treatmentSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type maxRatio(maxRatioSEXP);
    Rcpp::traits::input_parameter< double >::type caliper(caliperSEXP);
    rcpp_result_gen = Rcpp::wrap(matchPsInternal(propensityScores, treatment, maxRatio, caliper));
    return rcpp_result_gen;
END_RCPP
}
// aucWithCi
std::vector<double> aucWithCi(std::vector<double> propensityScores, std::vector<int> treatment);
RcppExport SEXP _CohortMethod_aucWithCi(SEXP propensityScoresSEXP, SEXP treatmentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type propensityScores(propensityScoresSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type treatment(treatmentSEXP);
    rcpp_result_gen = Rcpp::wrap(aucWithCi(propensityScores, treatment));
    return rcpp_result_gen;
END_RCPP
}
// aucWithoutCi
double aucWithoutCi(std::vector<double> propensityScores, std::vector<int> treatment);
RcppExport SEXP _CohortMethod_aucWithoutCi(SEXP propensityScoresSEXP, SEXP treatmentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type propensityScores(propensityScoresSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type treatment(treatmentSEXP);
    rcpp_result_gen = Rcpp::wrap(aucWithoutCi(propensityScores, treatment));
    return rcpp_result_gen;
END_RCPP
}
// adjustedKm
DataFrame adjustedKm(const std::vector<double>& weight, const std::vector<int>& time, const std::vector<int>& y);
RcppExport SEXP _CohortMethod_adjustedKm(SEXP weightSEXP, SEXP timeSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< const std::vector<int>& >::type time(timeSEXP);
    Rcpp::traits::input_parameter< const std::vector<int>& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(adjustedKm(weight, time, y));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_CohortMethod_matchPsInternal", (DL_FUNC) &_CohortMethod_matchPsInternal, 4},
    {"_CohortMethod_aucWithCi", (DL_FUNC) &_CohortMethod_aucWithCi, 2},
    {"_CohortMethod_aucWithoutCi", (DL_FUNC) &_CohortMethod_aucWithoutCi, 2},
    {"_CohortMethod_adjustedKm", (DL_FUNC) &_CohortMethod_adjustedKm, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_CohortMethod(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
