#include "point.hh"

Point::Point()
	: mX(0), mY(0)
{
}

Point::Point(double x, double y)
	: mX(x), mY(y)
{
}

double Point::x() const
{
	return mX;
}

double Point::y() const
{
	return mY;
}

