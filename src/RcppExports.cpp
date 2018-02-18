// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// sexp_symengine_ascii_art
SEXP sexp_symengine_ascii_art();
RcppExport SEXP _symengine_sexp_symengine_ascii_art() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(sexp_symengine_ascii_art());
    return rcpp_result_gen;
END_RCPP
}
// sexp_symengine_version
SEXP sexp_symengine_version();
RcppExport SEXP _symengine_sexp_symengine_version() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(sexp_symengine_version());
    return rcpp_result_gen;
END_RCPP
}
// sexp_symengine_have_component
SEXP sexp_symengine_have_component(SEXP s);
RcppExport SEXP _symengine_sexp_symengine_have_component(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(sexp_symengine_have_component(s));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP R_ExternalPtrTag(SEXP);
RcppExport SEXP c_basic_add(SEXP, SEXP);
RcppExport SEXP c_basic_diff(SEXP, SEXP);
RcppExport SEXP c_basic_div(SEXP, SEXP);
RcppExport SEXP c_basic_eq(SEXP, SEXP);
RcppExport SEXP c_basic_evalf(SEXP, SEXP, SEXP);
RcppExport SEXP c_basic_hash(SEXP);
RcppExport SEXP c_basic_mul(SEXP, SEXP);
RcppExport SEXP c_basic_neq(SEXP, SEXP);
RcppExport SEXP c_basic_pow(SEXP, SEXP);
RcppExport SEXP c_basic_str(SEXP);
RcppExport SEXP c_basic_str_julia(SEXP);
RcppExport SEXP c_basic_sub(SEXP, SEXP);
RcppExport SEXP c_basic_subs2(SEXP, SEXP, SEXP);
RcppExport SEXP c_basic_type(SEXP);
RcppExport SEXP c_const_Catalan();
RcppExport SEXP c_const_E();
RcppExport SEXP c_const_EulerGamma();
RcppExport SEXP c_const_GoldenRatio();
RcppExport SEXP c_const_I();
RcppExport SEXP c_const_complex_infinity();
RcppExport SEXP c_const_infinity();
RcppExport SEXP c_const_minus_one();
RcppExport SEXP c_const_nan();
RcppExport SEXP c_const_neginfinity();
RcppExport SEXP c_const_one();
RcppExport SEXP c_const_pi();
RcppExport SEXP c_const_zero();
RcppExport SEXP c_integer_from_int(SEXP);
RcppExport SEXP c_integer_from_str(SEXP);
RcppExport SEXP c_integer_get_int(SEXP);
RcppExport SEXP c_is_a_Complex(SEXP);
RcppExport SEXP c_is_a_ComplexDouble(SEXP);
RcppExport SEXP c_is_a_ComplexMPC(SEXP);
RcppExport SEXP c_is_a_Integer(SEXP);
RcppExport SEXP c_is_a_Number(SEXP);
RcppExport SEXP c_is_a_Rational(SEXP);
RcppExport SEXP c_is_a_RealDouble(SEXP);
RcppExport SEXP c_is_a_RealMPFR(SEXP);
RcppExport SEXP c_is_a_Symbol(SEXP);
RcppExport SEXP c_make_const(SEXP);
RcppExport SEXP c_new_heap_symbol(SEXP);
RcppExport SEXP c_number_is_complex(SEXP);
RcppExport SEXP c_number_is_negative(SEXP);
RcppExport SEXP c_number_is_positive(SEXP);
RcppExport SEXP c_number_is_zero(SEXP);
RcppExport SEXP c_parse_str(SEXP);
RcppExport SEXP c_realdouble_from_d(SEXP);
RcppExport SEXP c_realdouble_get_d(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_symengine_sexp_symengine_ascii_art", (DL_FUNC) &_symengine_sexp_symengine_ascii_art, 0},
    {"_symengine_sexp_symengine_version", (DL_FUNC) &_symengine_sexp_symengine_version, 0},
    {"_symengine_sexp_symengine_have_component", (DL_FUNC) &_symengine_sexp_symengine_have_component, 1},
    {"R_ExternalPtrTag",                         (DL_FUNC) &R_ExternalPtrTag,                         1},
    {"c_basic_add",                              (DL_FUNC) &c_basic_add,                              2},
    {"c_basic_diff",                             (DL_FUNC) &c_basic_diff,                             2},
    {"c_basic_div",                              (DL_FUNC) &c_basic_div,                              2},
    {"c_basic_eq",                               (DL_FUNC) &c_basic_eq,                               2},
    {"c_basic_evalf",                            (DL_FUNC) &c_basic_evalf,                            3},
    {"c_basic_hash",                             (DL_FUNC) &c_basic_hash,                             1},
    {"c_basic_mul",                              (DL_FUNC) &c_basic_mul,                              2},
    {"c_basic_neq",                              (DL_FUNC) &c_basic_neq,                              2},
    {"c_basic_pow",                              (DL_FUNC) &c_basic_pow,                              2},
    {"c_basic_str",                              (DL_FUNC) &c_basic_str,                              1},
    {"c_basic_str_julia",                        (DL_FUNC) &c_basic_str_julia,                        1},
    {"c_basic_sub",                              (DL_FUNC) &c_basic_sub,                              2},
    {"c_basic_subs2",                            (DL_FUNC) &c_basic_subs2,                            3},
    {"c_basic_type",                             (DL_FUNC) &c_basic_type,                             1},
    {"c_const_Catalan",                          (DL_FUNC) &c_const_Catalan,                          0},
    {"c_const_E",                                (DL_FUNC) &c_const_E,                                0},
    {"c_const_EulerGamma",                       (DL_FUNC) &c_const_EulerGamma,                       0},
    {"c_const_GoldenRatio",                      (DL_FUNC) &c_const_GoldenRatio,                      0},
    {"c_const_I",                                (DL_FUNC) &c_const_I,                                0},
    {"c_const_complex_infinity",                 (DL_FUNC) &c_const_complex_infinity,                 0},
    {"c_const_infinity",                         (DL_FUNC) &c_const_infinity,                         0},
    {"c_const_minus_one",                        (DL_FUNC) &c_const_minus_one,                        0},
    {"c_const_nan",                              (DL_FUNC) &c_const_nan,                              0},
    {"c_const_neginfinity",                      (DL_FUNC) &c_const_neginfinity,                      0},
    {"c_const_one",                              (DL_FUNC) &c_const_one,                              0},
    {"c_const_pi",                               (DL_FUNC) &c_const_pi,                               0},
    {"c_const_zero",                             (DL_FUNC) &c_const_zero,                             0},
    {"c_integer_from_int",                       (DL_FUNC) &c_integer_from_int,                       1},
    {"c_integer_from_str",                       (DL_FUNC) &c_integer_from_str,                       1},
    {"c_integer_get_int",                        (DL_FUNC) &c_integer_get_int,                        1},
    {"c_is_a_Complex",                           (DL_FUNC) &c_is_a_Complex,                           1},
    {"c_is_a_ComplexDouble",                     (DL_FUNC) &c_is_a_ComplexDouble,                     1},
    {"c_is_a_ComplexMPC",                        (DL_FUNC) &c_is_a_ComplexMPC,                        1},
    {"c_is_a_Integer",                           (DL_FUNC) &c_is_a_Integer,                           1},
    {"c_is_a_Number",                            (DL_FUNC) &c_is_a_Number,                            1},
    {"c_is_a_Rational",                          (DL_FUNC) &c_is_a_Rational,                          1},
    {"c_is_a_RealDouble",                        (DL_FUNC) &c_is_a_RealDouble,                        1},
    {"c_is_a_RealMPFR",                          (DL_FUNC) &c_is_a_RealMPFR,                          1},
    {"c_is_a_Symbol",                            (DL_FUNC) &c_is_a_Symbol,                            1},
    {"c_make_const",                             (DL_FUNC) &c_make_const,                             1},
    {"c_new_heap_symbol",                        (DL_FUNC) &c_new_heap_symbol,                        1},
    {"c_number_is_complex",                      (DL_FUNC) &c_number_is_complex,                      1},
    {"c_number_is_negative",                     (DL_FUNC) &c_number_is_negative,                     1},
    {"c_number_is_positive",                     (DL_FUNC) &c_number_is_positive,                     1},
    {"c_number_is_zero",                         (DL_FUNC) &c_number_is_zero,                         1},
    {"c_parse_str",                              (DL_FUNC) &c_parse_str,                              1},
    {"c_realdouble_from_d",                      (DL_FUNC) &c_realdouble_from_d,                      1},
    {"c_realdouble_get_d",                       (DL_FUNC) &c_realdouble_get_d,                       1},
    {NULL, NULL, 0}
};

RcppExport void R_init_symengine(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
