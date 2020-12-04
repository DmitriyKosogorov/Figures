#pragma once
#ifndef Triangle_H
#define Triangle_H
#include"figure.h"
typedef long long myclass;

class Triangle : public Figure
{
private:
    point A, B, C;
public:
    Triangle();
    Triangle(point A1, point B1, point C1);
    double perimetr();
    double area();
    void type();
};


#endif