#include <iostream>
#include <string>

class Cube
{
private:
    float a;

public:
    Cube();
    Cube(float iA);
    ~Cube()=default;
    int volume();
    int square();
    bool operator == (Cube const obj);
    bool operator > (Cube const obj);
    bool operator < (Cube const obj);
    friend std::ostream &operator << (std::ostream &output, Cube obj);
    friend std::istream &operator >> (std::istream  &input,  Cube obj);
    friend Cube &operator *= (Cube &obj,float num);
};

