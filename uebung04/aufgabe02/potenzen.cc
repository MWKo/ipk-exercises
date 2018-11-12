#include <iostream>

namespace power
{
	int iterative(int q, int n)
	{
		if (n < 0) {
			std::cout << "n has to be positive or 0" << std::endl;
			return 0;	
		}

		int result = 1;
		for (int i = 0; i < n; i++) {
			result *= q;		
		}
		return result;
	}

	int recursive(int q, int n)
	{
		if (n < 0) {
			std::cout << "n has to be positive or 0" << std::endl;
			return 0;	
		}
		if (n == 0) return 1;
		return q * recursive(q, n - 1);
	}

	int betterImpl(int q, int n)
	{
		if (n < 0) {
			std::cout << "n has to be positive or 0" << std::endl;
			return 0;	
		}

		int currentMultiplier = q;
		int result;
		if (n % 2 == 0) result = 1;
		else result = q;
		
		while (n /= 2) {
			currentMultiplier *= currentMultiplier;
			if (n % 2 == 1) result *= currentMultiplier;
		}
		
		return result;
	}
	
}

int main()
{
	int q;
	int n;
	std::cout << "q: " << std::flush;
	std::cin >> q;
	std::cout << "n: " << std::flush;
	std::cin >> n;

	std::cout << "Iterative: " << power::iterative(q, n) << std::endl;
	std::cout << "Recursive: " << power::recursive(q, n) << std::endl;
	std::cout << "Better Impl.: " << power::betterImpl(q, n) << std::endl;

}

