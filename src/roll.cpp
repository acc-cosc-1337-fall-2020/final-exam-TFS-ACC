//
#include "roll.h"

void Roll::roll_die(){

    Roll::die1.roll();
    Roll::die2.roll();

    value = die1.rolled_value() + die2.rolled_value();

    Roll::rolled = true;

}

int Roll::roll_value() const{

    return value;

}