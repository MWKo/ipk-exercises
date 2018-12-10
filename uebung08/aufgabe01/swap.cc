#include <iostream>

template <typename Ty>
void swap(Ty& a, Ty& b)
{
	Ty temp = std::move(a);
	a = std::move(b);
	b = std::move(temp);
}

int main(int argc, char** argv)
{
	int a = 1;
	int b = 2;
	std::cout << "a = " << a << " b = " << b << std::endl;
	swap(a, b);
	std::cout << "a = " << a << " b = " << b << std::endl;

	double c = 1;
	double d = 2;
	std::cout << "c = " << c << " d = " << d << std::endl;
	swap(c, d);
	std::cout << "c = " << c << " d = " << d << std::endl;

	//swap(a, c); Compilerfehler!

	return 0;
}
