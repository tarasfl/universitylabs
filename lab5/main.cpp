#include "lab5.cpp"
#include <string>
#include <iostream>
using namespace std;

int main(){
    Dinner d_1(8, 19.00);
    Candy c_1("c_1", 80, 10, 89.0);
    d_1.addCandy(&c_1);
    Candy c_2("c_2", 89, 6, 99.0);
    d_1.addCandy(&c_2);
    Candy c_3("c_3", 50, 10, 41.0);
    d_1.addCandy(&c_3);
    Candy c_4("c_4", 60, 11, 9.0);
    d_1.addCandy(&c_4);
    d_1.findTheMostExpensiveCandies();
    return 0;
}