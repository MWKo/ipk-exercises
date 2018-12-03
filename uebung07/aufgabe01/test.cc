#include <iostream>
#include <cmath>
#include "polygon.hh"

const double pi = 3.14159;

int main()
{
	for (int i = 1; i <= 10; i++) {
		std::vector<double> x(i);
		std::vector<double> y(i);
		for (int j = 0; j < i; j++) {
			double temp = (double)j / i * 2 * pi;
			x[j] = cos(temp);
			y[j] = sin(temp);
		}
		Polygon p(x, y);
		std::cout << "n = " << i << std::endl;
		std::cout << "Polygon volume: " << p.volume() << std::endl;
		std::cout << "Formular volume: " << (double)i / 2 * sin((double)2 * pi / i)  << std::endl;
		std::cout << std::endl;
	}
}
