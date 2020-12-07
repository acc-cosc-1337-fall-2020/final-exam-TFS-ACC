//
#include<iostream>
#include<vector>
#include<memory>
#include "roll.h"

using std::cin; using std::cout;

#ifndef SHOOTER_H
#define SHOOTER_H

class Shooter 
{

    public:

        Roll* throw_die(Die &dieA, Die &dieB);
        friend std::ostream& operator<< (std::ostream& out, Shooter& shot);

    private:

        std::vector<Roll*> rolls;

};

#endif