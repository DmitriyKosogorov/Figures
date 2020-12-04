#include<iostream>
#include "Polygon.h"
#include<string>
#include<algorithm>
typedef long long myclass;
using namespace std;

Polygon::Polygon()
{
    mas[0].x = 0;
    mas[0].y = 0;
}

Polygon::Polygon(int num, point* massiv)
{
    size = num;
    mas = new point[size];
    for (int i = 0; i < num; i++)
    {
        mas[i].x = massiv[i].x;
        mas[i].y = massiv[i].y;
    }
}
double Polygon::area()
{
    double area = 0, Avx, Avy, Bvx, Bvy;
    point a, b, c;
    a = mas[0];
    for (int i = 1; i < size - 1; i++)
    {
        b = mas[i];
        c = mas[i + 1];
        Avx = b.x - a.x;
        Avy = b.y - a.y;
        Bvx = c.x - a.x;
        Bvy = c.y - a.y;
        area = area + (Avx * Bvy - Avy * Bvx) / 2;
    }
    return abs(area);
}
double Polygon::perimetr()
{
    double perimetr = 0;
    for (int i = 0; i < size - 1; i++)
    {
        perimetr = perimetr + sqrt((mas[i].x - mas[i + 1].x) * (mas[i].x - mas[i + 1].x) + (mas[i].y - mas[i + 1].y) * (mas[i].y - mas[i + 1].y));
    }
    perimetr = perimetr + sqrt((mas[size - 1].x - mas[0].x) * (mas[size - 1].x - mas[0].x) + (mas[size - 1].y - mas[0].y) * (mas[size - 1].y - mas[0].y));
    return perimetr;
}
void Polygon::type()
{
    cout << "Polygon:" << endl;;
}

Polygon:: ~Polygon()
{
        delete[] mas;
}