#ifndef SRC_MATHOPS_H__
#define SRC_MATHOPS_H__

#include <math.h>
#include "src/fastonebigheader.h"
#include "gsl/gsl_vector.h"
#include <vector>

// dummy function to test gsl optimizer
double dummy_func(const gsl_vector *v, void *params);
// Testing gsl
double TestGSL();
//Testing nlopt
double TestNLOPT();

// To accelerate logsumexp, ignore values if they're 1/1000th or less than the maximum value
const double LOG_THRESH = log(0.0000001);

double fast_log_sum_exp(double log_v1, double log_v2);
double normal_cdf(double mean, double stdev, double x);
#endif  // SRC_MATHOPS_H__
