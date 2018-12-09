#if 0

#include "canvas.hh"
#include <iostream>

const Point CENTER(3, 4);
const double WIDTH = 0.5;
const double HEIGHT = 0.25;
const int HOR_PIXELS = 100;
const int VERT_PIXELS = 100;

int main()
{
	Canvas canvas(CENTER, WIDTH, HEIGHT, HOR_PIXELS, VERT_PIXELS);

	Point cDownLeft = canvas.coord(0, 0);
	if (!(cDownLeft.x() == CENTER.x() - WIDTH / 2 && cDownLeft.y() == CENTER.y() - HEIGHT / 2)) return 1;
	
	Point cDownRight = canvas.coord(HOR_PIXELS, 0);
	if (!(cDownRight.x() == CENTER.x() + WIDTH / 2 && cDownRight.y() == CENTER.y() - HEIGHT / 2)) return 2;

	Point cUpLeft = canvas.coord(0, VERT_PIXELS);
	if (!(cUpLeft.x() == CENTER.x() - WIDTH / 2 && cUpLeft.y() == CENTER.y() + HEIGHT / 2)) return 3;

	Point cUpRight = canvas.coord(HOR_PIXELS, VERT_PIXELS);
	if (!(cUpRight.x() == CENTER.x() + WIDTH / 2 && cUpRight.y() == CENTER.y() + HEIGHT / 2)) return 4;

	return 0;
}

#endif