#ifndef CANVAS_HH
#define CANVAS_HH

#include <vector>

#include "point.hh"
#include "pgm.hh"

class Canvas
{
private:
	std::vector< std::vector<int> > mPixels;
	const Point mCenter;
	const double mWidth;
	const double mHeight;
	
public:
	Canvas(const Point& center, double width, double height, int horPixels, int vertPixels);

	int brightness(int i, int j) const;
	void setBrightness(int i, int j, int brightness);
	Point coord(int i, int j) const;

	void write(const std::string& filename);
};

#endif
