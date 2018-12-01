#include <iostream>
#include <map>
#include <cctype>
#include "wordfrequencies.hh"

std::map<char, int> get_frequencies()
{
	std::map<char, int> result;
	while (true)
	{
		unsigned char c;
		std::cin >> c;
		if (!std::cin) break;
		if (std::isalpha(c)) result[std::toupper(c)]++;
	}
	return result;
}

void print_frequencies(const std::map<char, int>& frequencies)
{
	int sum = 0;
	for (auto it = frequencies.begin(); it != frequencies.end(); it++) {
		sum += it->second;
	}
	for (auto it = frequencies.begin(); it != frequencies.end(); it++) {
		std::cout << "Letter: " << it->first << " Frequency: " << static_cast<double>(it->second)/ sum << std::endl;
	}
	std::cout << "Sum all letters: " << sum << std::endl;
}

int main()
{
	print_frequencies(get_frequencies());
	return 0;
}