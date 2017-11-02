// Pi.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include"smallCla.h"

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

//随机数生成类
void initRandomSeed();
int MyRandom::randomInteger(int low, int high)
{
	initRandomSeed();
	double d = rand() / (double(RAND_MAX) + 1);
	double s = d*(double(high) - low + 1);
	return int(floor(low + s));
}

double MyRandom::randomReal(double low, double high)
{
	initRandomSeed();
	double d = rand() / (double(RAND_MAX) + 1);
	double s = d*(high - low);
	return low + s;
}

bool MyRandom::randomChance(double p)
{
	initRandomSeed();
	return randomReal(0, 1) < p;
}

void MyRandom::setRandomSeed(int seed)
{
	initRandomSeed();
	srand(seed);
}

void initRandomSeed()
{
	static bool initialized = false;
	if (!initialized) {
		srand(int(time(NULL)));
		initialized = true;
	}
}
