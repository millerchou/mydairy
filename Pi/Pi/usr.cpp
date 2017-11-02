

#include "stdafx.h"
#include"smallCla.h"
const double halflife = 0.5;
int main()
{
	MyRandom a;
	double circle = 0.0;
	double x, y;
	for (int i = 0; i < 10000; i++) {
		x = a.randomReal(-1.0,1.0);
		y = a.randomReal(-1.0,1.0);
		if (x*x + y*y < 1)
			circle++;
	}
	cout << circle / 10000*4;
	getchar();
	return 0;
}