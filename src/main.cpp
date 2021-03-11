#include <iostream>
#include "Racecar.hpp"
#include <vector>

int main() {

  std::vector<double> initial_condition{1, 2, 3, 4};
  Racecar r1(initial_condition);

  std::cout << "initial_condition" << std::endl;
    
  return 0;
}