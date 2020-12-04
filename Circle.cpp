#include<iostream>
#include "Circle.h"
#include<string>
#include<algorithm>
typedef long long myclass;

Circle::Circle()
{
    radius = 0;
    center.x = 0;
    center.y = 0;
}
Circle::Circle(double r, point c) 
{
    radius = r;
    center.x = c.x;
    center.y = c.y;
}
double Circle::area()
{
    return radius * radius * Pi;
}
double Circle::perimetr()
{
    return 2 * Pi * radius;
}
void Circle::type()
{
    cout << "Circle:" << endl;;
}