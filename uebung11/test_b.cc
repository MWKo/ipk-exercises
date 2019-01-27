#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include <unordered_map>

#include "frequencysource.hh"
#include "frequencies.hh"
#include "filters.hh"

int main(int argc, char** argv)
{
	typedef std::unordered_map<char, size_t>		LetterMap;
	typedef std::unordered_map<std::string, size_t>	WordMap;
	LetterFilter lt;
	WordFilter wt;

	Frequencies<LetterMap, LetterFilter> fLetter(lt);
	fLetter.addPlugin(std::make_shared<PrintTotalCount<LetterMap>>());
	fLetter.addPlugin(std::make_shared<PrintFrequencies<LetterMap>>());
	std::cout << "Letters:" << std::endl;
	for (int i = 1; i < argc; i++) {
		std::ifstream f(argv[i]);
		auto source = streamLetterSource(f);
		fLetter.readData(source);
	}
	fLetter.printStatistics();
	std::cout << std::endl;

	std::cout << "Words:" << std::endl;
	Frequencies<WordMap, WordFilter> fWord(wt);
	fWord.addPlugin(std::make_shared<PrintTotalCount<WordMap>>());
	fWord.addPlugin(std::make_shared<PrintFrequencies<WordMap>>());
	for (int i = 1; i < argc; i++) {
		std::ifstream f(argv[i]);
		auto source = streamWordSource(f);
		fWord.readData(source);
	}
	fWord.printStatistics();
	std::cout << std::endl;

	return 0;
}
