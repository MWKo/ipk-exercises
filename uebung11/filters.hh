#ifndef FILTERS_H
#define FILTERS_H

#include <string>
#include <cctype>

#include "sanitizeword.hh"

class LetterFilter
{
public:
	typedef char Data;

	Data transform(const Data& data)
	{
		return std::toupper(data);
	}

	bool remove(const Data& data)
	{
		return !std::isalpha(data);
	}
};

class WordFilter
{
public:
	typedef std::string Data;

	Data transform(const Data& data)
	{
		return sanitize_word(data);
	}

	bool remove(const Data& data)
	{
		return false;
	}
};

#endif