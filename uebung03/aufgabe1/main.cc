#include <iostream>
#include <cmath>

int main(int argc, char** argv)
{
	double a;
	std::cout << "a = " << std::flush;
	std::cin >> a;

	double b;
	std::cout << "b = " << std::flush;
	std::cin >> b;

	double c;
	std::cout << "c = " << std::flush;
	std::cin >> c;
	
	std::cout << std::endl;

	if(a != 0) {
		double underSqrt = b * b - 4 * a * c;
		if (underSqrt > 0) {
			double sqrtValue = sqrt(underSqrt);
			double x1 = (-b + sqrtValue) / (2 * a);
			double x2 = (-b - sqrtValue) / (2 * a);
			std::cout << "x1 = " << x1 << std::endl;
			std::cout << "x2 = " << x2 << std::endl;
		} else if (underSqrt == 0) {
			double x = -b / (2 * a);
			if (x == -0.0) x = 0.0;
			std::cout << "x = " << x << std::endl;
		} else {
			std::cout << "Keine Loesung" << std::endl;
		}
	} 
	else {
		std::cout << "a darf nicht 0 sein" << std::endl;
	}
	std::cout << std::endl;
	
	return 0;
}
