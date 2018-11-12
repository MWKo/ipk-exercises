#include <iostream>

typedef unsigned long long ullong;

ullong fibR(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fibR(n - 2) + fibR(n - 1);
}

ullong fib(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;

	ullong prev = 0;
	ullong curr = 1;
	for (int i = 1; i < n; i++) {
		ullong newVal = prev + curr;
		prev = curr;
		curr = newVal;
	}

	return curr;
}

int main(int argc, char** argv)
{
	ullong n;
	std::cout << "n = " << std::flush;
	std::cin >> n;
	
	for (int i = 0; i<=n; i++) {
		std::cout << "f(" << i << ") = " << fib(i) << std::endl;
	}

	return 0;
}
