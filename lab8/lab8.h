#include <iostream>
#include <string>
#include <stack>
#include <complex>

#define type_number int
#define complex_number std::complex<type_number>

class ComplexStack
{
private:
    std::stack<complex_number> stack;

public:
    ComplexStack();
    ~ComplexStack() = default;

    void add(complex_number num);
    void add(int real, int imag);

    bool remove(int index);
    bool remove(int real, int imag);

    complex_number getByIndex(int k);
    int find(complex_number num);
    int find(int real, int imag);

    void sumTopTwo();

    int size();
    void print();

    void destroy();
};