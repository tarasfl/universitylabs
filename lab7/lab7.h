#include <iostream>
#include <string>


class Dot{
    public:
    bool isDot;
    Dot();
    ~Dot()=default;
    void setDot();
};

class Segment: public Dot{
    public:
    float length;
    Segment();
    ~Segment()=default;
    void setLength(float l);
};

class Rectangle: public Segment{
    public:
    float width;
    Rectangle();
    ~Rectangle()=default;
    void setWidth(float w);
    float rectangleSquare();
};

class Parallelepiped: public Rectangle{
    public:
    float height;
    Parallelepiped();
    ~Parallelepiped()=default;
    float volume();
    void setHeight(float h);
};

class Circle: public Segment{
    public:
    float radius;
    Circle();
    ~Circle()=default;
    float circleSquare();
    void setRadius(float r);
};

class Sphere: public Circle{
    public:
    Sphere();
    ~Sphere()=default;
    float volume();
};
