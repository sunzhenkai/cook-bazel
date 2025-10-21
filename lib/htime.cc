#include <ctime>
#include <iostream>
// self
#include "lib/htime.h"

void print_localtime() {
  std::time_t result = std::time(nullptr);
  std::cout << std::asctime(std::localtime(&result));
}
