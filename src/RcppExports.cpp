// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// cpp_smooth3d
DataFrame cpp_smooth3d(S4 las, NumericVector radius, NumericVector weight, int ncpu, bool pgbar, bool verbose);
RcppExport SEXP _lidRalignment_cpp_smooth3d(SEXP lasSEXP, SEXP radiusSEXP, SEXP weightSEXP, SEXP ncpuSEXP, SEXP pgbarSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    Rcpp::traits::input_parameter< bool >::type pgbar(pgbarSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_smooth3d(las, radius, weight, ncpu, pgbar, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_lidRalignment_cpp_smooth3d", (DL_FUNC) &_lidRalignment_cpp_smooth3d, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_lidRalignment(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
