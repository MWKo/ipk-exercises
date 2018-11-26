#ifndef STATISTICS_HH
#define STATISTICS_HH

#include <vector>
#include <cmath>

double mean(const std::vector<double>& v);

double median(const std::vector<double>& v);

double moment(const std::vector<double>& v, int k);

double standard_deviation(const std::vector<double>& v);

bool test_standard_deviation(const std::vector<double>& v);

#endif
