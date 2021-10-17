#include "lab7.cpp"
#include <string>


int main(){
    Parallelepiped p;
    p.setHeight(9);
    p.setLength(8);
    p.setWidth(6);
    std::cout<<p.volume();

    return 0;
}