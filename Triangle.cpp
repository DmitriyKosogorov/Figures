#include<iostream>
#include "Triangle.h"
#include<string>
#include<algorithm>
typedef long long myclass;

Triangle::Triangle()
{
    A.x = 0;
    A.y = 0;
    B.x = 0;
    B.y = 0;
    C.x = 0;
    C.y = 0;
}

Triangle::Triangle(point A1, point B1, point C1)
{
    A.x = A1.x;
    A.y = A1.y;
    B.x = B1.x;
    B.y = B1.y;
    C.x = C1.x;
    C.y = C1.y;
}
double Triangle::perimetr()
{
    double s1, s2, s3;
    s1 = sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
    s2 = sqrt((A.x - C.x) * (A.x - C.x) + (A.y - C.y) * (A.y - C.y));
    s3 = sqrt((C.x - B.x) * (C.x - B.x) + (C.y - B.y) * (C.y - B.y));
    return s1 + s2 + s3;
}
double Triangle::area()
{
    double Avx, Avy, Bvx, Bvy;
    Avx = A.x - B.x;
    Avy = A.y - B.y;
    Bvx = C.x - B.x;
    Bvy = C.y - B.y;
    return (Avx * Bvy - Avy * Bvx) / 2;
}
void Triangle::type()
{
    cout << "Triangle:" << endl;;
}
