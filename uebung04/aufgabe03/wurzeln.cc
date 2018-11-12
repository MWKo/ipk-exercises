#include <iostream>

double powerD(double q, int n)
{
	if (n < 0) {
		std::cout << "n has to be positive or 0" << std::endl;
		return 0;	
	}

	double currentMultiplier = q;
	double result;
	if (n % 2 == 0) result = 1;
	else result = q;
	
	while (n /= 2) {
		currentMultiplier *= currentMultiplier;
		if (n % 2 == 1) result *= currentMultiplier;
	}
	
	return result;
}

double root_iterative(double q, int n, int steps)
{
	if (n < 0) {
		std::cout << "n has to be positive or 0" << std::endl;
		return 0;	
	}

	double result = 1.0;
	for (int i = 0; i < steps; i++) {
		result = result + (1.0 / (double)n) * (q / powerD(result, n - 1) - result);
	}

	return result;	
}

void test_root(double q, int n, int steps)
{
	double a = root_iterative(q, n, steps);
	double powerA_N = powerD(a, n);
	std::cout << "q       = " << q 			<< std::endl;
	std::cout << "n       = " << n 			<< std::endl;
	std::cout << "a       = " << a 			<< std::endl;
	std::cout << "a^n     = " << powerA_N 		<< std::endl;
	std::cout << "q - a^n = " << q - powerA_N 	<< std::endl;
	std::cout << std::endl;

}

int main()
{
	int q;
	int n;
	int steps;
	std::cout << "q: " << std::flush;
	std::cin >> q;
	std::cout << "n: " << std::flush;
	std::cin >> n;
	std::cout << "steps: " << std::flush;
	std::cin >> steps;
	std::cout << std::endl;

	test_root(q, n, steps);
}


