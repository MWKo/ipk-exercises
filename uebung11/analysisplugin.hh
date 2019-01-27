#include <iostream>

template<typename Map>
class AnalysisPlugin {
public:
	using Data = typename Map::key_type;

	// always add virtual destructor
	virtual ~AnalysisPlugin()
	{}
	
	// returns the name of the plugin
	virtual std::string name() const = 0;
	
	// does some statistics on the map and prints it to stdout
	virtual void printStatistics(const Map& map)
	{
		 // do nothing by default
	}

};

template <typename Map>
class PrintTotalCount : public AnalysisPlugin<Map>
{
public:
	virtual ~PrintTotalCount() override
	{}

	virtual std::string name() const override { return "PrintTotalCount"; }

	virtual void printStatistics(const Map& map) override
	{
		std::size_t total = 0;

		for (const auto& entry : map)
			total += entry.second;

		std::cout << "Total count: " << total << std::endl;
	}
};

template <typename Map>
class PrintFrequencies : public AnalysisPlugin<Map>
{
public:
	virtual ~PrintFrequencies() override
	{}

	virtual std::string name() const override { return "PrintFrequencies"; }

	virtual void printStatistics(const Map& map) override
	{
		std::size_t total = 0;

		for (const auto& entry : map)
			total += entry.second;

		for (const auto& entry : map)
			std::cout << entry.first << ": " << static_cast<double>(entry.second) / total << std::endl;
	}
};