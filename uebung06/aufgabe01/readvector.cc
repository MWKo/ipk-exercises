#include <iostream>
#include "io.hh"
#include "statistics.hh"

void printVec(const std::vector<double>& v) 
{
	for (double val : v) {
		std::cout << val << "; ";
	}
	std::cout << std::endl;
}

int main()
{
	std::vector<double> vec = read_vector();
	printVec(vec);
	std::cout << "Mean: " << mean(vec) << std::endl;
	std::cout << "Median: " << median(vec) << std::endl;
	std::cout << "Moment: " << moment(vec, 5) << std::endl;	
	std::cout << "Standard Deviation: " << standard_deviation(vec) << std::endl;
	std::cout << "Standard Deviation Test: " << test_standard_deviation(vec) << std::endl;
	
}
