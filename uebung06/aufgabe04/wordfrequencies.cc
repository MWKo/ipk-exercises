#include <iostream>
#include <map>
#include <unordered_map>
#include "sanitizeword.hh"
#include "wordfrequencies.hh"

std::map<std::string, int> get_frequencies()
{
	std::map<std::string, int> result;
	while (true)
	{
		std::string s;
		std::cin >> s;
		if (!std::cin) break;
		result[sanitize_word(s)]++;
	}
	return result;
}

void print_frequencies(const std::map<std::string, int>& frequencies)
{
	int sum = 0;
	for (auto it = frequencies.begin(); it != frequencies.end(); it++) {
		sum += it->second;
	}
	for (auto it = frequencies.begin(); it != frequencies.end(); it++) {
		std::cout << "Word: " << it->first << std::endl;
		std::cout << "Frequency: " << static_cast<double>(it->second) / sum << std::endl;
		std::cout << std::endl;
	}
	std::cout << "Sum all words: " << sum << std::endl;
}


std::unordered_map<std::string, int> get_frequencies_um()
{
	std::unordered_map<std::string, int> result;
	while (true)
	{
		std::string s;
		std::cin >> s;
		if (!std::cin) break;
		result[sanitize_word(s)]++;
	}
	return result;
}

void print_frequencies(const std::unordered_map<std::string, int>& frequencies)
{
	int sum = 0;
	for (auto it = frequencies.begin(); it != frequencies.end(); it++) {
		sum += it->second;
	}
	for (auto it = frequencies.begin(); it != frequencies.end(); it++) {
		std::cout << "Word: " << it->first << std::endl;
		std::cout << "Frequency: " << static_cast<double>(it->second) / sum << std::endl;
		std::cout << std::endl;
	}
	std::cout << "Sum all words: " << sum << std::endl;
}

int main()
{
	print_frequencies(get_frequencies());
	return 0;
}
