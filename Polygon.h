#pragma once
#ifndef Polyg_H
#define Polyg_H
typedef long long myclass;

class Polygon : public Figure
{
private:
    int size = 0;
    point* mas;
public:
    Polygon();
    Polygon(int num, point* massiv);
    double area();
    double perimetr();
    void type();
    ~Polygon();
};

#endif