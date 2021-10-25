#include "lab8.cpp"
#include <string>

int main(){
    ComplexStack c;
    c.add(9, 6);
    c.add(5, 8);
    c.add(14, 8);
    c.add(32, 67);

    c.find(0, 0);
    c.getByIndex(2);
    std::cout<<std::endl;
    c.sumTopTwo();
    c.print();
    
    c.remove(1);
    std::cout<<std::endl;
    c.sumTopTwo();
    c.find(14, 8);
    c.find(5, 8);
    c.print();
    c.size();

    return 0;
}