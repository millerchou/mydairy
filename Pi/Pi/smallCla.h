#pragma once
#ifndef SMALLCLA_H
#define SMALLCLA_H
#include<iostream>
#include<math.h>
#include<string>
#include<cstdlib>
#include<ctime>
#include<iomanip>
#include"stanford\include\grid.h"
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
	bool randomChance(double p);//ָ���ɹ�����
	void setRandomSeed(int seed);//�����÷������

private:
	
};

string trim(const string& str);//����һ������whichɾ�����ַ����еĿո�

string acronym(const string& str);//����ĸ����

void removeCharacters(string&str, const string& remove);//ɾ��str�е�ÿ��remove�ַ�

//string encodeCaesarCipher(const string& str, const int& shift);

//void fixCounts(Grid<bool>& mines, Grid<int>& counts);

int cannonball(int n);

int raiseToPower(int n, int k);

int gcd(int x, int y);

int digitSum(int n);

int digitalRoot(int n);

string reverse(string str);
string intorever(int n, string& str);
#endif // !SMALLCLA_H




