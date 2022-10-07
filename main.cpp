#include <iostream>
using namespace std;

#include "adding_class.h"
#include "subtraction_class.h"
#include "multiplactaion_class.h"
#include "dividing_class.h"

/*
    * Calculator Using Classes
        - Adding{}
        - Subtraction{}
        - Multiplication{}
        - Dividing{}
*/

int main(){

    // Make Instances from Classes
    Adding add;
    Subtraction sub;
    Multiplication mul;
    Dividing div;
    
    // Calculation 2 numbers
    add.printAdding(1,1);
    sub.printSubtraction(1,1);
    mul.printMultiplication(1,1);
    div.printDividing(1,1);
    




    
    




    return 0;
}