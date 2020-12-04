#include<iostream>
#include "Rectangle.h"
#include<string>
#include<algorithm>
typedef long long myclass;
using namespace std;


Rectangle::Rectangle()
{
    A.x = 0;
    A.y = 0;
    B.x = 0;
    B.y = 0;
}
Rectangle::Rectangle(point A1, point B1)
{
    A.x = A1.x;
    A.y = A1.y;
    B.x = B1.x;
    B.y = B1.y;
}
double Rectangle::perimetr()
{
    return (abs(A.x - B.x)) * 2 + (abs(A.y - B.y)) * 2;
}
double Rectangle::area()
{
    return (abs(A.x - B.x) * abs(B.y - A.y));
}
void Rectangle::type()
{
    cout << "Rectangle:" << endl;;
}
