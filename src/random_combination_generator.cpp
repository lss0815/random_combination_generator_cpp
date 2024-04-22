#include "random_combination_generator/random_combination_generator.h"

#include <list>

std::vector<int> RandomCombinationGenerator::GetRandomCombination(int max_num,
                                                                  int size) {
  std::vector<int> result;
  std::list<int> list;
  for (int i = 0; i < size; i++) {
    std::uniform_int_distribution<> distrib(0, max_num - i);
    auto num = distrib(random_generator_);
    auto it = list.begin();
    while (it != list.end() && *it <= num) {
      num++;
      it++;
    }
    list.insert(it, num);
  }
  for (auto it = list.begin(); it != list.end(); it++) {
    result.push_back(*it);
  }
  return result;
}
