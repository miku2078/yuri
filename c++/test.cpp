#include <limits>
#include <iostream>
#include <yuri.h>

int main() {
  using namespace yuri;
  info << std::numeric_limits<long unsigned int>::max();
  return 0;
}