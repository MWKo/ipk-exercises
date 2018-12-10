#include <iostream>
#include "point.hh"

template <typename Coord, int dim>
void print(const Point<Coord, dim>& pt)
{
	std::cout << "dim: " << Point<Coord, dim>::dimension << std::endl;
	for (int i = 0; i<Point<Coord, dim>::dimension; i++) {
		std::cout << pt[i] << "; ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

int main()
{
	Point<int, 1> pt1;
	Point<float, 2> pt2 = {{5.4, 4.7}};
	Point<double, 3> pt3 = {{5.123456, 4.987654321}};
	print(pt1); print(pt2); print(pt3);
	return 0;
}
