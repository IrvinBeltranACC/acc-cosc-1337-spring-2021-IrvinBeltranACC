#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get_num_factorial function")
{
	REQUIRE(get_num_factorial(3)== 6);
	//REQUIRE(get_num_factorial(4)== 24);
	//REQUIRE(get_num_factorial(5)== 120);
	
}