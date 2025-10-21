#include <ctime>
#include <iostream>
// 3rd
#include "fmt/format.h"
// self
#include "lib/htime.h"

void print_localtime() {
  std::time_t result = std::time(nullptr);
  std::cout << std::asctime(std::localtime(&result));
  std::cout << fmt::format("{}", std::asctime(std::localtime(&result)));
}
