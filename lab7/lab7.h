#include <iostream>
#include <string>

class Dot{
    public:
    bool isDot;
    void setDot();
};

class Segment: public Dot{
    public:
    float length;
    void setLength(float l);
};

class Rectangle: public Segment{
    public:
    float width;
    void setWidth(float w);
    float rectangleSquare();
};

class Parallelepiped: public Rectangle{
    public:
    float height;
    float volume();
    void setHeight(float h);
};

class Circle: public Segment{
    public:
    float radius;
    float circleSquare();
    void setRadius(float r);
};

class Sphere: public Circle{
    public:
    float volume();
};
