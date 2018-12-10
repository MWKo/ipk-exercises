#ifndef POINT_HH
#define POINT_HH

#include <array>
#include <cmath>

template <typename Coord, int dim>
class Point
{
private:
	std::array<Coord, dim> mCoords;

public:
	typedef Coord Coordinate;
	static const int dimension = dim;

	Point()
	{
		for (auto& c : mCoords) {
			c = 0;
		}
	}

	Point(const std::array<Coord, dim>& pt)
		: mCoords(pt)
	{
	}

	Coord& x(int i) { return mCoords[i]; }
	const Coord& x(int i) const { return mCoords[i]; }
	Coord& operator[](int i) { return mCoords[i]; }
	const Coord& operator[](int i) const { return mCoords[i]; }

	Coord norm() const
	{
		Coord sum = 0;
		for (const auto& c : mCoords) {
			sum += c * c;
		}
		return std::sqrt(sum);
	}

};

#endif
