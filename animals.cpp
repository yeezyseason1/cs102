//all of the actual work has been done in the .h file. here all i do is declare my objects and use 
//them for the output portion of the serived class they are a part of.

#include <iostream>
#include <string>
#include "animals.h"

using namespace std;

int main () {
    Age monkey;
    monkey.getAge();

    AnimalFood bear;
    bear.getFood();

    VetVisit lion;
    lion.getVetVisit();
}
