#ifndef CANVAS_HH
#define CANVAS_HH

#include <vector>

class Canvas
{
private:
	std::vector< std::vector<int> > mPixels;
	const Point mCenter;
	const double mPWidth;
	const double mPHeight;
	
public:
	Canvas(const Point& center, double width, double height, int horPixels, int vertPixels);
};

#endif
