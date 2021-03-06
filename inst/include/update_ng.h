#ifndef _UPDATE_NG_H_
#define _UPDATE_NG_H_
void update_ng(double & phi_mu, double & lambda_mu, arma::vec & omega, arma::uword nm,
               const double c0, const double c1, double s,
               const arma::vec & psi_i, const arma::vec & prior_psi_mean, double & accept);
#endif
