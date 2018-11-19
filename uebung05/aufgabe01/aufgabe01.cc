#include <iostream>
#include <vector>
#include <utility>
#include <cmath>

void printValues(const std::vector<double>& vec)
{
	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << "; ";
	}
	std::cout << std::endl;
}


std::pair<double, double> getSmallestABiggest(const std::vector<double>& vec)
{
	if (vec.size() == 0) return std::pair<double, double>(0, 0);

	double min = std::numeric_limits<double>::max();
	double max = std::numeric_limits<double>::min();
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] < min) min = vec[i];
		if (vec[i] > max) max = vec[i];
	}
	return std::pair<double, double>(min, max);
}


std::vector<double> reversed(const std::vector<double>& v)
{
	std::vector<double> result;
	result.reserve(v.size());

	for (int i = 0; i < v.size(); i++) {
		result.push_back(v[v.size() - 1 - i]);
	}

	return result;
}


void roundInVec(std::vector<double>& vec)
{
	for (double& val : vec) {
		val = std::round(val);	
	}
}

void reverseInVec(std::vector<double>& v)
{
	int i = 0;
	int j = (int)v.size() - 1;
	while (i < j) {
		std::swap(v[i], v[j]);
		i++; j--;
	}
}

int main_a(int argc, char** argv)
{
	std::vector<double> v1;
	std::vector<double> v2(10);
	std::vector<double> v3 = {{ 3, 8.5, 7, 5.3, 9, 2 }};
	
	std::cout << "V1:" << std::endl;
	printValues(v1);
	std::cout << std::endl;

	std::cout << "V2:" << std::endl;
	printValues(v2);
	std::cout << std::endl;

	std::cout << "V3:" << std::endl;
	printValues(v3);
	std::cout << std::endl;
	
	return 0;
}

int main_b(int argc, char** argv)
{
	std::vector<double> v1;
	std::vector<double> v2(10);
	std::vector<double> v3 = {{ 3, 8, -5.47, 5, 9, 2 }};
	std::vector<double> v4 = {{ 5, 47.7, -47.8, 0}};

	std::cout << "V1:" << std::endl;
	std::pair<double, double> sb1 = getSmallestABiggest(v1);
	std::cout << sb1.first << " " << sb1.second << std::endl;
	std::cout << std::endl;

	std::cout << "V2:" << std::endl;
	std::pair<double, double> sb2 = getSmallestABiggest(v2);
	std::cout << sb2.first << " " << sb2.second << std::endl;
	std::cout << std::endl;

	std::cout << "V3:" << std::endl;
	std::pair<double, double> sb3 = getSmallestABiggest(v3);
	std::cout << sb3.first << " " << sb3.second << std::endl;
	std::cout << std::endl;

	std::cout << "V4:" << std::endl;
	std::pair<double, double> sb4 = getSmallestABiggest(v4);
	std::cout << sb4.first << " " << sb4.second << std::endl;
	std::cout << std::endl;
	
	return 0;
}

int main_c(int argc, char** argv)
{
	std::vector<double> v1;
	std::vector<double> v2(10);
	std::vector<double> v3 = {{ 3, 8, -5.47, 5, 9, 2 }};
	std::vector<double> v4 = {{ 5, 47.7, -47.8, 0}};

	std::cout << "V1:" << std::endl;
	printValues(reversed(v1));
	std::cout << std::endl;

	std::cout << "V2:" << std::endl;
	printValues(reversed(v2));
	std::cout << std::endl;

	std::cout << "V3:" << std::endl;
	printValues(reversed(v3));
	std::cout << std::endl;

	std::cout << "V4:" << std::endl;
	printValues(reversed(v4));
	std::cout << std::endl;
	
	return 0;
}

int main_d(int argc, char** argv)
{
	std::vector<double> v1;
	std::vector<double> v2 = {{ 4.7, 8.2, 4.8, 2.7, 1.4 }};
	std::vector<double> v3 = {{ 3, 8, -5.47, 5, 9, 2 }};
	std::vector<double> v4 = {{ 5, 47.7, -47.8, 0}};

	std::cout << "V1:" << std::endl;
	roundInVec(v1);
	printValues(v1);
	std::cout << std::endl;

	std::cout << "V2:" << std::endl;
	roundInVec(v2);
	printValues(v2);
	std::cout << std::endl;

	std::cout << "V3:" << std::endl;
	roundInVec(v3);
	printValues(v3);
	std::cout << std::endl;

	std::cout << "V4:" << std::endl;
	roundInVec(v4);
	printValues(v4);
	std::cout << std::endl;
	
	return 0;
}

int main_e(int argc, char** argv)
{
	std::vector<double> v1;
	std::vector<double> v2 = {{ 4.7, 8.2, 4.8, 2.7, 1.4 }};
	std::vector<double> v3 = {{ 3, 8, -5.47, 5, 9, 2 }};
	std::vector<double> v4 = {{ 5, 47.7, -47.8, 0}};

	std::cout << "V1:" << std::endl;
	reverseInVec(v1);
	printValues(v1);
	std::cout << std::endl;

	std::cout << "V2:" << std::endl;
	reverseInVec(v2);
	printValues(v2);
	std::cout << std::endl;

	std::cout << "V3:" << std::endl;
	reverseInVec(v3);
	printValues(v3);
	std::cout << std::endl;

	std::cout << "V4:" << std::endl;
	reverseInVec(v4);
	printValues(v4);
	std::cout << std::endl;
	
	return 0;
}


int main(int argc, char** argv)
{
	return main_e(argc, argv);
}

