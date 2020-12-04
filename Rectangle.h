#pragma once
#ifndef Rect_H
#define Rect_H
#include"figure.h"
class Rectangle : public Figure
{
private:
    point A;
    point B;
public:
    Rectangle();
    Rectangle(point A1, point B1);
    double perimetr();
    double area();
    void type();
};
#endif