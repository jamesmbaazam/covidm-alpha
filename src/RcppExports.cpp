// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "covidm_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// cm_backend_simulate_v2
Rcpp::List cm_backend_simulate_v2(Rcpp::List parameters, unsigned int n_run, unsigned long int seed, unsigned int n_threads, Rcpp::String r_file_out);
RcppExport SEXP _covidm_cm_backend_simulate_v2(SEXP parametersSEXP, SEXP n_runSEXP, SEXP seedSEXP, SEXP n_threadsSEXP, SEXP r_file_outSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_run(n_runSEXP);
    Rcpp::traits::input_parameter< unsigned long int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_threads(n_threadsSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type r_file_out(r_file_outSEXP);
    rcpp_result_gen = Rcpp::wrap(cm_backend_simulate_v2(parameters, n_run, seed, n_threads, r_file_out));
    return rcpp_result_gen;
END_RCPP
}
// cm_evaluate_distribution_v2
Rcpp::DataFrame cm_evaluate_distribution_v2(Rcpp::String dist_code, unsigned int steps, double xmin, double xmax);
RcppExport SEXP _covidm_cm_evaluate_distribution_v2(SEXP dist_codeSEXP, SEXP stepsSEXP, SEXP xminSEXP, SEXP xmaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type dist_code(dist_codeSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type steps(stepsSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xmax(xmaxSEXP);
    rcpp_result_gen = Rcpp::wrap(cm_evaluate_distribution_v2(dist_code, steps, xmin, xmax));
    return rcpp_result_gen;
END_RCPP
}
// cm_backend_mcmc_test
Rcpp::DataFrame cm_backend_mcmc_test(Rcpp::List R_base_parameters, Rcpp::List params_priors, unsigned long int seed, unsigned int burn_in, unsigned int iterations, unsigned int n_threads, bool classic_gamma);
RcppExport SEXP _covidm_cm_backend_mcmc_test(SEXP R_base_parametersSEXP, SEXP params_priorsSEXP, SEXP seedSEXP, SEXP burn_inSEXP, SEXP iterationsSEXP, SEXP n_threadsSEXP, SEXP classic_gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type R_base_parameters(R_base_parametersSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params_priors(params_priorsSEXP);
    Rcpp::traits::input_parameter< unsigned long int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type burn_in(burn_inSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_threads(n_threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type classic_gamma(classic_gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(cm_backend_mcmc_test(R_base_parameters, params_priors, seed, burn_in, iterations, n_threads, classic_gamma));
    return rcpp_result_gen;
END_RCPP
}
// cm_backend_optimize_test
Rcpp::DataFrame cm_backend_optimize_test(Rcpp::List R_base_parameters, Rcpp::List params_priors, unsigned int maxeval, double ftol_abs, unsigned long int seed, unsigned int n_threads);
RcppExport SEXP _covidm_cm_backend_optimize_test(SEXP R_base_parametersSEXP, SEXP params_priorsSEXP, SEXP maxevalSEXP, SEXP ftol_absSEXP, SEXP seedSEXP, SEXP n_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type R_base_parameters(R_base_parametersSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params_priors(params_priorsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type maxeval(maxevalSEXP);
    Rcpp::traits::input_parameter< double >::type ftol_abs(ftol_absSEXP);
    Rcpp::traits::input_parameter< unsigned long int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_threads(n_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(cm_backend_optimize_test(R_base_parameters, params_priors, maxeval, ftol_abs, seed, n_threads));
    return rcpp_result_gen;
END_RCPP
}
// cm_backend_sample_fit_test
Rcpp::List cm_backend_sample_fit_test(Rcpp::List R_base_parameters, Rcpp::DataFrame posterior, unsigned int n, unsigned long int seed);
RcppExport SEXP _covidm_cm_backend_sample_fit_test(SEXP R_base_parametersSEXP, SEXP posteriorSEXP, SEXP nSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type R_base_parameters(R_base_parametersSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type posterior(posteriorSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< unsigned long int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(cm_backend_sample_fit_test(R_base_parameters, posterior, n, seed));
    return rcpp_result_gen;
END_RCPP
}
// cm_test_num_threads
void cm_test_num_threads(unsigned int n_threads);
RcppExport SEXP _covidm_cm_test_num_threads(SEXP n_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type n_threads(n_threadsSEXP);
    cm_test_num_threads(n_threads);
    return R_NilValue;
END_RCPP
}
// call_cpp_func
double call_cpp_func(SEXP xptr_func, double x);
RcppExport SEXP _covidm_call_cpp_func(SEXP xptr_funcSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type xptr_func(xptr_funcSEXP);
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(call_cpp_func(xptr_func, x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_covidm_cm_backend_simulate_v2", (DL_FUNC) &_covidm_cm_backend_simulate_v2, 5},
    {"_covidm_cm_evaluate_distribution_v2", (DL_FUNC) &_covidm_cm_evaluate_distribution_v2, 4},
    {"_covidm_cm_backend_mcmc_test", (DL_FUNC) &_covidm_cm_backend_mcmc_test, 7},
    {"_covidm_cm_backend_optimize_test", (DL_FUNC) &_covidm_cm_backend_optimize_test, 6},
    {"_covidm_cm_backend_sample_fit_test", (DL_FUNC) &_covidm_cm_backend_sample_fit_test, 4},
    {"_covidm_cm_test_num_threads", (DL_FUNC) &_covidm_cm_test_num_threads, 1},
    {"_covidm_call_cpp_func", (DL_FUNC) &_covidm_call_cpp_func, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_covidm(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
