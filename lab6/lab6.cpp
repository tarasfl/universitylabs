#include "lab6.h"
#include <string>


Cube::Cube(float iA, bool cub){
    a = iA;
    isCube =cub;
}

Cube::Cube() {
    isCube=false;
    a=0;
}

int Cube::volume() {
    if(isCube){
    std::cout<< a*a*a<<std::endl;
    return (a*a*a);
    } else{
        std::cout<<"You must have cube"<<std::endl;
        return 0;
    };

}

int Cube::square() {
    if(isCube){
    std::cout << 6*a*a << std::endl;
    return (6*a*a);
    }else{
        std::cout<<"You must have cube"<<std::endl;
        return 0;
    }
}

bool Cube::operator < (Cube const obj) {
        if (a<obj.a) {
            std::cout<<"first cube are smaller"<<std::endl;
        } else {
            std::cout<<"first cube are not smaller"<<std::endl;
        };
        return a<obj.a;
}

bool Cube::operator > (Cube const obj){
        if(a>obj.a) {
            std::cout<<"first cube are bigger"<<std::endl;
        } else {
            std::cout<<"first cube are not bigger"<<std::endl;
        };
        return a > obj.a;
}

bool Cube::operator == (Cube const obj){
        if(a==obj.a) {
            std::cout<<"cubes are equel"<<std::endl;
        } else {
            std::cout<<"cubes are not equel"<<std::endl;
        };
        return a==obj.a;
}

std::ostream &operator << ( std::ostream &output, Cube obj ) { 
        output << "a = " << obj.a;
        return output;            
}

std::istream &operator >>( std::istream  &input,  Cube &obj ) { 
        input >> obj.a;
        return input;            
}

Cube &operator *= (Cube &obj, float num) {
    obj.a *= num;  
    std::cout << obj << std::endl;
    return obj;
};
