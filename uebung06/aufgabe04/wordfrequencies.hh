#ifndef WORDFREQUENCIES_HH
#define WORDFREQUENCIES_HH

#include <iostream>
#include <map>
#include <unordered_map>

std::map<std::string, int> get_frequencies();
void print_frequencies(const std::map<std::string, int>& frequencies);
std::unordered_map<std::string, int> get_frequencies_um();
void print_frequencies(const std::unordered_map<std::string, int>& frequencies);

#endif