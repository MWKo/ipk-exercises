#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include <unordered_map>

#include "frequencysource.hh"
#include "letterfrequencies.hh"

int main(int argc, char** argv)
{
	typedef std::unordered_map<char, size_t> Map;
	LetterFrequencies<Map> lt;
	for (int i = 1; i < argc; i++) {
		std::ifstream f(argv[i]);
		auto source = streamLetterSource(f);
		lt.readData(source);
	}
	lt.printStatistics();

	return 0;
}
