#include <iostream>

void collatz(int zahl)
{
	do {
		std::cout << zahl << std::endl;
		if (zahl % 2 == 0) zahl /= 2;
		else zahl = zahl * 3 + 1;
	} while (!((zahl >= -1 && zahl <= 1) || zahl == -5 || zahl == -17));
	std::cout << zahl << std::endl;
	std::cout << std::endl;
}

int main(int argc, char** argv) 
{
	collatz(0);
	collatz(1);
	collatz(2);
	collatz(3);
	collatz(23);
	collatz(-50);


	return 0;
}

