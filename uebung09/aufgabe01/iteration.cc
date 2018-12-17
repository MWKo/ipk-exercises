#include "iteration.hh"

IterationResult iterate(Point z, Point c, double threshold, int maxIt)
{
	double thresholdSq = threshold * threshold;
	int i = 0;
	for (; i < maxIt && z.x() * z.x() + z.y() * z.y() <= thresholdSq; i++) {
		double nx = z.x() * z.x() - z.y() * z.y() + c.x();
		double ny = 2.0 * z.x() * z.y() + c.y();
		z = Point(nx, ny);
	}
	return IterationResult(z, i); 
}


