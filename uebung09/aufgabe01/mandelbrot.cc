#include "iteration.hh"

#include <iostream>

void mandelbrot(Canvas& canvas, double threshold, int maxIt)
{
	for (int y = 0; y < canvas.vertPixels(); y++) {
		for (int x = 0; x < canvas.horPixels(); x++) {
			Point c = canvas.coord(x, y);
			IterationResult res = iterate(Point(0, 0), c, threshold, maxIt);
			if (res.iterations() == maxIt) {
				canvas(x, y) = 0;
			} 
			else {
				canvas(x, y) = std::log(res.iterations()) * 100;
			}
		}
	}
}

int main()
{
	Canvas canvas(Point(-1, 0), 4.0, 3.0, 4000, 3000);
	mandelbrot(canvas, 4, 100);
	canvas.write("mandelbrot.pgm");
}
