#include "canvas.hh"
#include "pgm.hh"

#include <algorithm>

int main()
{
	Canvas canvas(Point(0, 0), 4, 3, 4000, 3000);
	for (int x = 0; x < 4000; x++) {
		for (int y = 0; y < 3000; y++) {
			Point pt = canvas.coord(x, y);
			canvas.setBrightness(x, y, std::max(0.0, 100 * (sin(pt.x()) * sin(pt.y()) + 1)));
		}
	}
	canvas.write("picture.pgm");
}