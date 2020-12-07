//
#include <iostream>
#include "die.h"

#ifndef ROLL_H
#define ROLL_H

class Roll 
{

    public:

    Roll(Die &dieA, Die &dieB) 
        : die1{dieA}
        , die2{dieB} 
        { } 
    void roll_die();
    int roll_value() const;

    private:
    
    Die& die1;
    Die& die2;
    bool rolled = false;
    int value;

};

#endif
