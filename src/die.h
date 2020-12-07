//
#include<iostream>
#include<time.h>

using std::cin; using std::cout;

class Die 
{

    public:

        void roll();
        int rolled_value() const; 
        
    private: 

        int roll_value;
        int sides{6};

};
