#pragma once
#ifndef SMALLCLA_H
#define SMALLCLA_H
#include<iostream>
#include<math.h>
#include<string>
#include<cstdlib>
#include<ctime>
#include<iomanip>
#include<stack>
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
	bool randomChance(double p);//指定成功概率
	void setRandomSeed(int seed);//调试用非随机数

private:
	
};

string trim(const string& str);//返回一个副本which删除了字符串中的空格

string acronym(const string& str);//首字母缩略

void removeCharacters(string&str, const string& remove);//删除str中的每个remove字符

//string encodeCaesarCipher(const string& str, const int& shift);

//void fixCounts(Grid<bool>& mines, Grid<int>& counts);

//递归
//--------------------------------------------------------------------------------------
int cannonball(int n);

int raiseToPower(int n, int k);

int gcd(int x, int y);

int digitSum(int n);

int digitalRoot(int n);

string reverse(string str);

string intorever(int n, string& str);

void moveTower(int n, char start, char finish, char tmp);
void moveSingleDisk(char start, char finish);

void moveTower(stack<char>& start, stack<char>& dest, stack<char>& tmp,int n);
void moveSingleDisk(stack<char>& start, stack<char>& dest);
#endif // !SMALLCLA_H




