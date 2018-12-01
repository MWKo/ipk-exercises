#ifndef LETTERFREQUENCIES_HH
#define LETTERFREQUENCIES_HH

#include <iostream>
#include <map>

std::map<std::string, int> get_frequencies();
void print_frequencies(const std::map<std::string, int>& frequencies);

#endif