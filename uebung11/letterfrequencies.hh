#include <iostream>

template <typename Map>
class LetterFrequencies
{
private:
	Map _map;

public:
	template <typename Source>
	void readData(Source& source)
	{
		while (true) {
			auto data = source.next();
			if (!data.second) break;
			char c = data.first;
			if (std::isalpha(c)) {
				_map[std::toupper(c)] += 1;
			}
		}
	}

	void printStatistics()
	{
		std::size_t total = 0;

		for (const auto& entry : _map)
			total += entry.second;

		for (const auto& entry : _map)
			std::cout << entry.first << ": " << static_cast<double>(entry.second) / total << std::endl;
	}

};