#ifndef ITERATIONRESULT_HH
#define ITERATIONRESULT_HH

#include "point.hh"

class IterationResult {
private:
	Point mLastCalc;
	int mIterations;

public:
	IterationResult(Point lastCalc, int iterations);

	Point lastCalc() const;
	void setLastCalc(Point lastCalc);

	int iterations() const;
	void setIterations(int iterations);

};

#endif
