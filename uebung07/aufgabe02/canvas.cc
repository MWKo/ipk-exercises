#include "canvas.hh"

Canvas::Canvas(const Point& center, double width, double height, int horPixels, int vertPixels)
	: mCenter(center), mWidth(width), mHeight(height), mPixels(horPixels, std::vector<int>(vertPixels))
{
}
