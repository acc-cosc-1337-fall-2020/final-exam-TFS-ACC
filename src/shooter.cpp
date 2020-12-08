//
#include "shooter.h"

Roll* Shooter::throw_die(Die &dieA, Die &dieB){

    Roll* rolling = NULL;
    rolling = new Roll(dieA, dieB);

    rolling->roll_die();

    rolls.push_back(rolling);

    return rolling;

}

std::ostream& operator<< (std::ostream& out , Shooter& shot){

    for(auto &roll: shot.rolls)  

        std::cout << roll->roll_value() << "\n";

    return out;

}

