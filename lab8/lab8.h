#include <iostream>
#include <string>
#include <stack>


class Complexs{
    public:
    std::stack <int> stack;

    Complexs(){stack.push(0);};
    ~Complexs()=default;
    void add(int real, int imag);
    void sum();
    void findKey(int k);
    void find(int real, int imag);
    void complexsSize();
    void deleteComplex(int real, int imag);
    void destroy();
    void all();


};