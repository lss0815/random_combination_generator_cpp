#include <iostream>

#include "random_combination_generator/random_combination_generator.h"

int main() {
  RandomCombinationGenerator generator;
  int iter_num = 100000;
  int range = 100;
  int sampling_size = 20;
  for (int i = 0; i < iter_num; i++) {
    auto random_combination =
        generator.GetRandomCombination(range, sampling_size);
    if (random_combination.size() != sampling_size) {
      std::cerr << "Trial #" << i + 1
                << " Size Error!, Expected: " << sampling_size
                << " Current Size: " << random_combination.size() << "\n";
      std::cerr << "Skip Trial #" << i + 1 << "\n";
      continue;
    }
    for (int j = 0; j < sampling_size; j++) {
      for (int k = j + 1; k < sampling_size; k++) {
        if (random_combination[j] == random_combination[k]) {
          std::cerr << "Trial #" << i + 1 << " Duplicated number!!\n";
        }
      }
    }
    // for (int j = 0; j < sampling_size; j++) {
    //   std::cout << random_combination[j] << " ";
    // }
    // std::cout << "\n";
  }
  return 0;
}