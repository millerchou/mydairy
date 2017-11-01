// Pi.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include"Pi.h"

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


