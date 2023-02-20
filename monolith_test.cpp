#include <cassert>

#include "monolith.hpp"

void test() {

  {
      // TEST 1
  }

  {
      // TEST 2
  }

  // ...

  {
    // TEST ...
  }
}

int main() {

  monolith::version();

  test();

  return EXIT_SUCCESS;
}