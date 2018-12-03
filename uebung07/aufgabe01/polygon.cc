#include "polygon.hh"

Polygon::Polygon(const std::vector<Point>& corners)
	: mPoints(corners)
{
}

Polygon::Polygon(const std::vector<double>& x, const std::vector<double>& y)
	: mPoints()
{
	// TODO: throw error if x.size() != y.size()
	mPoints.reserve(x.size());
	for (int i = 0; i < x.size(); i++) {
		mPoints.push_back(Point(x[i], y[i]));
	}
}

std::size_t Polygon::corners() const
{
	return mPoints.size();
}

const Point& Polygon::corner(std::size_t i) const
{
	return mPoints[i];
}

double Polygon::volume() const
{
	double sum = 0;
	for (int i = 0; i < mPoints.size(); i++) {
		sum += mPoints[i].x() * mPoints[(i + 1) % mPoints.size()].y() - mPoints[(i + 1) % mPoints.size()].x() * mPoints[i].y();
	}
	return sum / 2;
}
