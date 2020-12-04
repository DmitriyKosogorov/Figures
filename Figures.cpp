#include<iostream>
#include<cmath>
#include<fstream>
#include<vector>
#include"Rectangle.cpp"
#include"Triangle.cpp"
#include"Circle.cpp"
#include"Polygon.cpp"
using namespace std;

int main()
{
    ifstream file;
    file.open("input.txt");
    point rA,rB,rC,rD;
    rA.x = 1;
    rA.y = 1;
    rB.x = 4;
    rB.y = 3;
    rC.x = 4;
    rC.y = 1;
    rD.x = 8;
    rD.y = 11;
    int size = 0;
    file >> size;
    point mas[77];
    for (int i = 0; i < size; i++)
    {
        file >> mas[i].x;
        file >> mas[i].y;
    }
    Rectangle* rect=new Rectangle(rA,rB);
    Triangle* tri=new Triangle(rA, rB, rC);
    Circle* cir = new Circle(13,rD);
    Polygon* pol = new Polygon(size,mas);
    vector <Figure*> vectorovich;
    vectorovich.push_back(cir);
    vectorovich.push_back(tri);
    vectorovich.push_back(rect);
    vectorovich.push_back(pol);
    double sumarea = 0,sumper=0;
    for (int i = 0; i < vectorovich.size(); i++)
    {
        vectorovich[i]->type();
        cout << vectorovich[i]->perimetr() << endl << vectorovich[i]->area()<<endl<<endl;
        sumarea = sumarea + vectorovich[i]->area();
        sumper = sumper + vectorovich[i]->perimetr();
    }
    cout << endl <<"sum of areas: "<< sumarea << endl <<"sum of perimetres: "<< sumper;
	return 0;
}
