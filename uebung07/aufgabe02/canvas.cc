#include "canvas.hh"

Canvas::Canvas(const Point& center, double width, double height, int horPixels, int vertPixels)
	: mCenter(center), mWidth(width), mHeight(height), mPixels(horPixels, std::vector<int>(vertPixels))
{
}

int Canvas::brightness(int i, int j) const
{
	return mPixels[i][j];
}

void Canvas::setBrightness(int i, int j, int brightness)
{
	mPixels[i][j] = brightness;
}

Point Canvas::coord(int i, int j) const
{
	double ratioWidth = mWidth / mPixels.size();
	double ratioHeight = mHeight / mPixels[0].size();

	return Point(mCenter.x() + i * ratioWidth - mWidth / 2, mCenter.y() + j * ratioHeight - mHeight / 2);
}

void Canvas::write(const std::string & filename)
{
	write_pgm(mPixels, filename);
}
