#pragma once
#include<iostream>
//#include<math.h>
using namespace std;

class Pi
{
public:
	Pi(double pre):precision(pre){}
	void makedw() { w = r_inch / precision; }
	long double areas();
private:
	double precision;
	long double r_inch = 2.0;
	long double w = 0.0;
};

long double Pi::areas()
{
	long double sum = 0;
	makedw();
	long double halfw = w / 2;
	for (int i = 0; i < precision; i++) {
		double x = i*w + halfw;
		long double doubleh = r_inch*r_inch - x*x;
		long double h = sqrt(doubleh);
		sum += h*w;
	}

	return sum;
}
