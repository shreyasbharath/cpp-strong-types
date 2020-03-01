#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <doctest.h>
#include <iterator>
#include <algorithm>
#include <string>
#include <vector>

#include "strong_types.hpp"

SCENARIO("Speed")
{
    GIVEN("Blah")
    {
        CHECK(2.6_mps == 2.6_mps);
    }
}
