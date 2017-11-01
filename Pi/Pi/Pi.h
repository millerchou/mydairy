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


