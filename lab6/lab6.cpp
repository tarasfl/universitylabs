#include "lab6.h"
#include <string>


Cube::Cube(int iA)
{
    a = iA;
}

int Cube::volume(){
    std::cout<< a*a*a<<std::endl;
    return (a*a*a);
}

int Cube::square(){
    return (6*a*a);
}

