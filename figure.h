#pragma once
#ifndef Figures_H
#define Figures_H
typedef long long myclass;

const double Pi = 3.1415926535;

struct point
{
	double x;
	double y;
};

class Figure
{
public:
	virtual double area() = 0;
	virtual double perimetr() = 0;
	virtual void type() = 0;
};

#endif