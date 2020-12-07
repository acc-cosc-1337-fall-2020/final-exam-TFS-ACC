//
#include "roll.h"

void Roll::roll_die(){

    Roll::die1.roll();
    Roll::die2.roll();

    int die1_rolled_value = die1.rolled_value();
    int die2_rolled_value = die2.rolled_value();

    value = die1_rolled_value + die2_rolled_value;

    Roll::rolled = true;

}

int Roll::roll_value() const{

    return value;

}