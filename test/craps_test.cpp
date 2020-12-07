#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Testing Die Class:"){

	Die dice;

		dice.roll();//1
	REQUIRE(dice.rolled_value() >= 1);
	REQUIRE(dice.rolled_value() <= 6 );
		dice.roll();//2
	REQUIRE(dice.rolled_value() >= 1);
	REQUIRE(dice.rolled_value() <= 6 );
		dice.roll();//3
	REQUIRE(dice.rolled_value() >= 1);
	REQUIRE(dice.rolled_value() <= 6 );
		dice.roll();//4
	REQUIRE(dice.rolled_value() >= 1);
	REQUIRE(dice.rolled_value() <= 6 );
		dice.roll();//5
	REQUIRE(dice.rolled_value() >= 1);
	REQUIRE(dice.rolled_value() <= 6 );
		dice.roll();//6
	REQUIRE(dice.rolled_value() >= 1);
	REQUIRE(dice.rolled_value() <= 6 );
		dice.roll();//7
	REQUIRE(dice.rolled_value() >= 1);
	REQUIRE(dice.rolled_value() <= 6 );
		dice.roll();//8
	REQUIRE(dice.rolled_value() >= 1);
	REQUIRE(dice.rolled_value() <= 6 );
		dice.roll();//9
	REQUIRE(dice.rolled_value() >= 1);
	REQUIRE(dice.rolled_value() <= 6 );
		dice.roll();//10
	REQUIRE(dice.rolled_value() >= 1);
	REQUIRE(dice.rolled_value() <= 6 );

}