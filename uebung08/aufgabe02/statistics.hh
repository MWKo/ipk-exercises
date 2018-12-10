#ifndef STATISTICS_HH
#define STATISTICS_HH

#include <vector>
#include <algorithm>

#include <iostream>
#include <cmath>

#include "statistics.hh"

template <typename Ty>
typename Ty::value_type mean(const Ty& v)
{
  typename Ty::value_type sum = 0;
  for (auto e : v)
    sum += e;

  return sum / v.size();
}

template <typename Ty>
typename Ty::value_type median(const Ty& v)
{
  std::vector<typename Ty::value_type> v2;
  for (auto e : v) {
    v2.push_back(e);
  }
  std::sort(v2.begin(),v2.end());

  if (v.size() % 2 == 0)
    {
      return 0.5 * (v2[v.size()/2 - 1] + v2[v.size()/2]);
    }
  else
    {
      return v2[(v.size()+1)/2 - 1];
    }
}

template <typename Ty>
typename Ty::value_type moment(const Ty& v, int k)
{
  typename Ty::value_type sum = 0;
  for (auto e : v)
    sum += std::pow(e,k);

  return sum / v.size();
}

template <typename Ty>
typename Ty::value_type standard_deviation(const Ty& v)
{
  auto m = mean(v);
  typename Ty::value_type sum = 0;
  for (auto e : v)
    sum += (m - e)*(m - e);

  return std::sqrt(sum / v.size());
}

template <typename Ty>
void statistics(const Ty& v)
{
  std::cout << "mean: " << mean(v) << std::endl;
  std::cout << "median: " << median(v) << std::endl;
  std::cout << "second moment: " << moment(v,2) << std::endl;
  std::cout << "std_dev: " << standard_deviation(v) << std::endl;
}

#endif // STATISTICS_HH
