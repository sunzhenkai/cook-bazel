#include <iostream>
// self
#include "greet.h"
#include "lib/htime.h"

int main(int argc, char *argv[]) {
  std::cout << get_greet("bazel") << std::endl;
  print_localtime();
  return 0;
}
