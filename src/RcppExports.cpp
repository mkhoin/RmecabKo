// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// simple_ngrams
ListOf<CharacterVector> simple_ngrams(const ListOf<const CharacterVector> tokenized_list, const int n, CharacterVector stopwords, const String ngram_delim);
RcppExport SEXP _RmecabKo_simple_ngrams(SEXP tokenized_listSEXP, SEXP nSEXP, SEXP stopwordsSEXP, SEXP ngram_delimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const ListOf<const CharacterVector> >::type tokenized_list(tokenized_listSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type stopwords(stopwordsSEXP);
    Rcpp::traits::input_parameter< const String >::type ngram_delim(ngram_delimSEXP);
    rcpp_result_gen = Rcpp::wrap(simple_ngrams(tokenized_list, n, stopwords, ngram_delim));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RmecabKo_simple_ngrams", (DL_FUNC) &_RmecabKo_simple_ngrams, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_RmecabKo(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
