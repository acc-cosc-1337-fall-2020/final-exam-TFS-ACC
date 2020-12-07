#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"

// TEST_CASE("Verify Test Configuration", "verification") {
// 	REQUIRE(true == true);
// }

TEST_CASE("Testing Die Class:"){

	Die dice;

	for(int i = 0; i <= 10; i++){
		dice.roll();
		REQUIRE(dice.rolled_value() >= 1);
		REQUIRE(dice.rolled_value() <= 6 );
	}

}

TEST_CASE("Testing Roll Class:"){

	Die dice1;
	Die dice2;

	Roll dicetoss(dice1, dice2);

	for(int i = 0; i <= 10; i++){
			dicetoss.roll_die();
		REQUIRE(dicetoss.roll_value() >= 2);
		REQUIRE(dicetoss.roll_value() <= 12);
	}

}