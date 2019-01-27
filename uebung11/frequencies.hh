#ifndef FREQUENCIES_H 
#define FREQUENCIES_H

#include <vector>
#include <memory>

#include "analysisplugin.hh"

template <typename Map, typename Filter>
class Frequencies
{
public:
	typedef typename Map::key_type Data;
	using Plugin = AnalysisPlugin<Map>;

private:
	Map _map;
	Filter _filter;

	std::vector<std::shared_ptr<Plugin>> _plugins;

public:
	explicit Frequencies(const Filter& filter)
		: _filter(filter)
	{
	}

	void addPlugin(const std::shared_ptr<Plugin> plugin)
	{
		_plugins.push_back(plugin);
	}

	template <typename Source>
	void readData(Source& source)
	{
		while (true) {
			auto data = source.next();
			if (!data.second) break;
			if (!_filter.remove(data.first)) {
				_map[_filter.transform(data.first)] += 1;
			}
		}
	}

	void printStatistics()
	{
		for (auto& plugin : _plugins) {
			plugin->printStatistics(_map);
		}
	}

};

#endif