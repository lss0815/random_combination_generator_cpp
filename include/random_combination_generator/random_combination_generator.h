/*
// Copyright (c) 2016 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
*/

#include <random>
#include <vector>

class RandomCombinationGenerator {
 public:
  RandomCombinationGenerator() = default;
  std::vector<int> GetRandomCombination(int max_num, int size);

 private:
  std::random_device
      random_seed_;  // a seed source for the random number engine
  std::mt19937 random_generator_{
      random_seed_()};  // mersenne_twister_engine seeded with rd()
};