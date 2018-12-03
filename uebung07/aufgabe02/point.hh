#ifndef POINT_HH
#define POINT_HH

class Point
{
private:
	double mX;
	double mY;

public:
	Point();
	Point(double x, double y);

	double x() const;
	double y() const;
};

#endif
