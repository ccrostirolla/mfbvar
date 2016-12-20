// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// build_U_cpp
arma::mat build_U_cpp(arma::mat Pi, int n_determ, int n_vars, int n_lags);
RcppExport SEXP MFBVAR_build_U_cpp(SEXP PiSEXP, SEXP n_determSEXP, SEXP n_varsSEXP, SEXP n_lagsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Pi(PiSEXP);
    Rcpp::traits::input_parameter< int >::type n_determ(n_determSEXP);
    Rcpp::traits::input_parameter< int >::type n_vars(n_varsSEXP);
    Rcpp::traits::input_parameter< int >::type n_lags(n_lagsSEXP);
    rcpp_result_gen = Rcpp::wrap(build_U_cpp(Pi, n_determ, n_vars, n_lags));
    return rcpp_result_gen;
END_RCPP
}
// max_eig_cpp
double max_eig_cpp(arma::mat M);
RcppExport SEXP MFBVAR_max_eig_cpp(SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(max_eig_cpp(M));
    return rcpp_result_gen;
END_RCPP
}
// rmatn
arma::mat rmatn(arma::mat M, arma::mat Q, arma::mat P);
RcppExport SEXP MFBVAR_rmatn(SEXP MSEXP, SEXP QSEXP, SEXP PSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type M(MSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Q(QSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type P(PSEXP);
    rcpp_result_gen = Rcpp::wrap(rmatn(M, Q, P));
    return rcpp_result_gen;
END_RCPP
}
// rinvwish
arma::mat rinvwish(int v, arma::mat S);
RcppExport SEXP MFBVAR_rinvwish(SEXP vSEXP, SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type v(vSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(rinvwish(v, S));
    return rcpp_result_gen;
END_RCPP
}
// rmultn
arma::vec rmultn(arma::vec m, arma::mat Sigma);
RcppExport SEXP MFBVAR_rmultn(SEXP mSEXP, SEXP SigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type m(mSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma(SigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(rmultn(m, Sigma));
    return rcpp_result_gen;
END_RCPP
}
// smoother
arma::mat smoother(arma::mat mZ, arma::mat Lambda, arma::mat mF, arma::mat mQ, int iT, int ip, int iq, arma::mat h0, arma::mat P0);
RcppExport SEXP MFBVAR_smoother(SEXP mZSEXP, SEXP LambdaSEXP, SEXP mFSEXP, SEXP mQSEXP, SEXP iTSEXP, SEXP ipSEXP, SEXP iqSEXP, SEXP h0SEXP, SEXP P0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type mZ(mZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mF(mFSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mQ(mQSEXP);
    Rcpp::traits::input_parameter< int >::type iT(iTSEXP);
    Rcpp::traits::input_parameter< int >::type ip(ipSEXP);
    Rcpp::traits::input_parameter< int >::type iq(iqSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type h0(h0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type P0(P0SEXP);
    rcpp_result_gen = Rcpp::wrap(smoother(mZ, Lambda, mF, mQ, iT, ip, iq, h0, P0));
    return rcpp_result_gen;
END_RCPP
}
// generate_mhh
arma::mat generate_mhh(arma::mat mZ, arma::mat Lambda, arma::mat mF, arma::mat mQ, int iT, int ip, int iq, arma::mat h0, arma::mat P0);
RcppExport SEXP MFBVAR_generate_mhh(SEXP mZSEXP, SEXP LambdaSEXP, SEXP mFSEXP, SEXP mQSEXP, SEXP iTSEXP, SEXP ipSEXP, SEXP iqSEXP, SEXP h0SEXP, SEXP P0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type mZ(mZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mF(mFSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mQ(mQSEXP);
    Rcpp::traits::input_parameter< int >::type iT(iTSEXP);
    Rcpp::traits::input_parameter< int >::type ip(ipSEXP);
    Rcpp::traits::input_parameter< int >::type iq(iqSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type h0(h0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type P0(P0SEXP);
    rcpp_result_gen = Rcpp::wrap(generate_mhh(mZ, Lambda, mF, mQ, iT, ip, iq, h0, P0));
    return rcpp_result_gen;
END_RCPP
}
// simulation_smoother
arma::mat simulation_smoother(arma::mat mZ, arma::mat Lambda, arma::mat mF, arma::mat mQ, int iT, int ip, int iq, arma::mat h0, arma::mat P0);
RcppExport SEXP MFBVAR_simulation_smoother(SEXP mZSEXP, SEXP LambdaSEXP, SEXP mFSEXP, SEXP mQSEXP, SEXP iTSEXP, SEXP ipSEXP, SEXP iqSEXP, SEXP h0SEXP, SEXP P0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type mZ(mZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mF(mFSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mQ(mQSEXP);
    Rcpp::traits::input_parameter< int >::type iT(iTSEXP);
    Rcpp::traits::input_parameter< int >::type ip(ipSEXP);
    Rcpp::traits::input_parameter< int >::type iq(iqSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type h0(h0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type P0(P0SEXP);
    rcpp_result_gen = Rcpp::wrap(simulation_smoother(mZ, Lambda, mF, mQ, iT, ip, iq, h0, P0));
    return rcpp_result_gen;
END_RCPP
}
