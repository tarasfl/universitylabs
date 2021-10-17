#include "lab7.h"
#include <string>

Dot::Dot(){
    isDot=0;
};
Segment::Segment(){
    length=0;
};
Rectangle::Rectangle(){
    width=0;
};
Parallelepiped::Parallelepiped(){
    height=0;
};
Circle::Circle(){
    radius=0;
};
void Dot::setDot(){
    isDot=1;
}

void Segment::setLength(float l){
    this->setDot();
    length=l;
}

void Rectangle::setWidth(float w){
    width=w;
}

void Parallelepiped::setHeight(float h){
    height=h;
}

void Circle::setRadius(float r){
    this->setDot();
    radius =r;
}

float Rectangle::rectangleSquare(){
    return length*width;
}

float Parallelepiped::volume(){
    return length*width*height;
}

float Circle::circleSquare(){
    return 3.14*radius*radius;
}

float Sphere::volume(){
    return (4*3.14*radius*radius*radius)/3;
}