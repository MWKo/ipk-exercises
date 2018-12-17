#include "iterationresult.hh"

IterationResult::IterationResult(Point lastCalc, int iterations) 
	: mLastCalc(lastCalc), mIterations(iterations) 
{
}

Point IterationResult::lastCalc() const 
{ 
	return mLastCalc;
}

void IterationResult::setLastCalc(Point lastCalc) 
{ 
	mLastCalc = lastCalc; 
}

int IterationResult::iterations() const 
{ 
	return mIterations; 
}

void IterationResult::setIterations(int iterations) 
{ 
	mIterations = iterations; 
}
