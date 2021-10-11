#include "lab6.cpp"
#include <string>


int main() {
    Cube c1(6.0, 1), c2(5.0, 1);
    c2 == c1;
    c2 > c1;
    c2 < c1;
    std::cout << "First cube : " << c1 << std::endl;
    c1 *= 9;
    std::cout << "Second cube : " << c1 << std::endl;
    c1.volume();
    c1.square();
    return 0;
}