#ifndef __MONOLITH_HPP__
#define __MONOLITH_HPP__

#include <iostream>

#define MONOLITH_VERSION_MAJOR 0
#define MONOLITH_VERSION_MINOR 0
#define MONOLITH_VERSION_PATCH 0

namespace monolith {

void version() {
  printf("monolith version %d.%d.%d\n", MONOLITH_VERSION_MAJOR,
         MONOLITH_VERSION_MINOR, MONOLITH_VERSION_PATCH);
}

} // namespace monolith

#endif // __MONOLITH_HPP__