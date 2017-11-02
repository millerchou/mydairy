#pragma once
#ifndef SMALLCLA_H
#define SMALLCLA_H
#include<iostream>
#include<math.h>
#include<cstdlib>
#include<ctime>
using namespace std;

class Pi
{
public:
	Pi(double pre) :precision(pre) {}
	void makedw() { w = r_inch / precision; }
	long double areas();
private:
	double precision;
	long double r_inch = 2.0;
	long double w = 0.0;
};

class MyRandom
{
public:
	int randomInteger(int low, int high);
	double randomReal(double low, double high);
	bool randomChance(double p);//指定成功概率
	void setRandomSeed(int seed);//调试用非随机数

private:
	
};


#endif // !SMALLCLA_H




