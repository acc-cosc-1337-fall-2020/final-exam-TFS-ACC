//
#include<die.h>

void Die::roll(){

    //srand(time(NULL));

    Die::roll_value = rand() % Die::sides + 1;

}

int Die::rolled_value() const{

    return Die::roll_value;

}