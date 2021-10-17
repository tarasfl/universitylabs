#include "lab8.cpp"
#include <string>

int main(){
    ComplexStack c;
    // c.add(new complex_number(9, 6));
    c.add(9, 6);
    c.add(5, 8);
    c.add(14, 8);
    c.add(32, 67);

    c.find(5, 8);

    c.sumTopTwo();
    c.print();

    std::cout << "Removing the second element" << std::endl;
    c.remove(1);
    c.sumTopTwo();
    c.print();

    return 0;
}