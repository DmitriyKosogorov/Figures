#pragma once
#ifndef Circle_H
#define Circle_H
#include"figure.h"

class Circle : public Figure
{
private:
    double radius;
    point center;
public:
    Circle();
    Circle(double r, point c);
    double area();
    double perimetr();
    void type();
};
#endif