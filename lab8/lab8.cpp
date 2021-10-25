#include "lab8.h"
#include <string>
#include <stack>

ComplexStack::ComplexStack()
{
    // this->stack = new std::stack<complex_number>();
}

void ComplexStack::add(complex_number num)
{
    this->stack.push(num);
}

void ComplexStack::add(int real, int imag)
{
    complex_number num = complex_number(real, imag);
    this->stack.push(num);
}

bool ComplexStack::remove(int index)
{
    bool result = false;
    if (this->stack.size() > index) // k == 0  -  the top element of the stack
    {
        std::stack<complex_number> buf;
        for (int i = 0; i <= index; i++)
        {
            buf.push(this->stack.top());
            this->stack.pop();
        }
        buf.pop();
        result = true;

        int l = buf.size();
        for (int i = 0; i < l; i++)
        {
            this->stack.push(buf.top());
            buf.pop();
        }
    }
    return result;
}
bool ComplexStack::remove(int real, int imag)
{
    bool result = false;
    int index = this->find(real, imag);
    if (index >= 0)
    {
        this->remove(index);
        result = true;
    }
    return result;
}

void ComplexStack::sumTopTwo()
{
    if (this->stack.size() >= 2)
    {
        complex_number last_num, prev_num;
        last_num = this->stack.top();
        this->stack.pop();
        prev_num = this->stack.top();
        this->stack.pop();

        this->stack.push(prev_num);
        this->stack.push(last_num);

        complex_number sum = last_num + prev_num;

        std::cout << "sum: " << sum << std::endl;
    }
    else
        std::cout << "you must have at least two elements";
}

complex_number ComplexStack::getByIndex(int k)
{
    complex_number result = (NULL, NULL);
    if (this->stack.size() > k) // k == 0  -  the top element of the stack
    {
        std::stack<complex_number> buf;
        for (int i = 0; i <= k; i++)
        {
            buf.push(this->stack.top());
            this->stack.pop();
        }
        result = buf.top();
        std::cout << "getByIndex(" << k << "): " << buf.top() << std::endl;

        int l = buf.size();
        for (int i = 0; i < l; i++)
        {
            this->stack.push(buf.top());
            buf.pop();
        }
    }
    return result;
}

int ComplexStack::find(complex_number num)
{
    int index = -1;
    std::stack<complex_number> buf;

    while (this->stack.size() > 0 && (this->stack.top() != num))
    {
        buf.push(this->stack.top());
        this->stack.pop();
        index++;
    }

    if (this->stack.size() > 0 && (this->stack.top() == num))
    {
        index++;
        std::cout << "find(" << num << "): found in the position: " << index << std::endl;
    }
    else
    {
        std::cout << "find(" << num << "): not found" << std::endl;
        index = -1;
    }

    int l = buf.size();
    for (int i = 0; i < l; i++)
    {
        this->stack.push(buf.top());
        buf.pop();
    }
    return index;
}

int ComplexStack::find(int real, int imag)
{
    complex_number num = complex_number(real, imag);
    return this->find(num);
}

int ComplexStack::size()
{
    int s = this->stack.size();
    std::cout << s << std::endl;
    return s;
}

void ComplexStack::print()
{
    std::cout << "Stack of complex numbers:" << std::endl;
    std::stack<complex_number> buf;

    int l = stack.size();
    for (int i = 0; i < l; i++)
    {
        std::cout << this->stack.top() << std::endl;
        buf.push(this->stack.top());
        this->stack.pop();
    }

    l = buf.size();
    for (int i = 0; i < l; i++)
    {
        this->stack.push(buf.top());
        buf.pop();
    }
}

void ComplexStack::destroy()
{
    std::stack<complex_number> b;
    this->stack.swap(b);
}
