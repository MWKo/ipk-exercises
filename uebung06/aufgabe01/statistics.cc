#include "statistics.hh"

double mean(const std::vector<double>& v)
{
	double sum = 0;
	for (double val : v) {
		sum += val;
	}
	return sum / v.size();
}

double median(const std::vector<double>& v)
{
	if (v.empty()) return 0;
	
	std::vector<double> sorted = v;
	std::sort(sorted.begin(), sorted.end());
	
	if (v.size() % 2 == 1) return sorted[(v.size() + 1) / 2 - 1];
	else return (sorted[v.size() / 2 - 1] + sorted[v.size() / 2]) / 2;
}

double moment(const std::vector<double>& v, int k)
{
	double m = 0;
	for (double val : v) {
		m += std::pow(val, k);
	}
	return m / v.size();
}

double standard_deviation(const std::vector<double>& v)
{
	double meanV = mean(v);
	double sd = 0;
	for (double val : v) {
		double x = val - meanV;
		sd += x * x;
	}

	return std::sqrt(sd / v.size());
}

bool test_standard_deviation(const std::vector<double>& v)
{
	double sd = standard_deviation(v);
	double meanV = mean(v);
	return sd * sd == moment(v, 2) - meanV * meanV;
}
