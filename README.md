Simple random combination generator in C++

This package selects a combination in a range

Example

```
#include "random_combination_generator/random_combination_generator.h"

...
  RandomCombinationGenerator generator;
  int range = 100;
  int combination_size = 20;
  std::vector<int> combination = generator.GetRandomCombination(range, combination_size);
...

```

For more detail, please check the directory `example`
