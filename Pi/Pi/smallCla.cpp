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
//随机数生成类
//--------------------------------------------------------------------------------------
//函数
string trim(const string & str)
{
	string result="";
	int start = -1;
	for (int i = 0; i < str.length(); i++) {
		char ch = str[i];
		if (isalpha(ch)) {
			if (start == -1)start = i;
		}
		else
		{
			if (start >= 0) {
				result += str.substr(start, i - start);
				start = -1;
			}
			if(!isspace(ch))
				result += ch;
		}
	}
	return result;
}

string acronym(const string & str)
{
	string result="";
	int start = -1;
	for (int i = 0; i < str.length(); i++) {
		char ch = str[i];
		if (isalpha(ch)) {
			if (start == -1)start = i;
		}
		else
		{
			if (start >= 0) {
				result += str[start];
				start = -1;
			}
		}
	}
	return result;
}

void removeCharacters(string & str, const string & remove)
{
	for (int i = 0; i < remove.length(); i++)
		for (int j = 0; j < str.length(); j++)
			if (remove[i] == str[j])
				str.erase(j--, 1);
}

int cannonball(int n)
{
	if (n <= 1)
		return n;
	return n*n + cannonball(n - 1);
}

int raiseToPower(int n, int k)
{
	if (k == 0)
		return 1;
	return n*raiseToPower(n, k - 1);
}

int gcd(int x, int y)
{
	static int cnt = 1;
	if (x%y == 0) {
		cout << cnt<<endl;
		return y;
	}
	cnt++;
	return gcd(y, x%y);
}

int digitSum(int n)
{
	if (n == 0)
		return 0;
	return digitSum(n / 10) + n % 10;
}

int digitalRoot(int n)
{
	if (n < 10)
		return n;
	return digitalRoot(digitSum(n));
}

string reverse(string str)
{
	string result = "";
	int n = str.length()-1;
	result = intorever(n, str);
	return result;
}

string intorever(int n, string& str) {
	if (n==-1)
		return "";
	return str[n]+intorever(n-1, str);
}
void moveSingleDisk(char start, char finish)
{
	cout << start << " -> " << finish << endl;
}
void moveTower(stack<char>& start, stack<char>& dest, stack<char>& tmp,int n)
{
	if (n==0)
		return;
	else
	{
		moveTower(start, tmp, dest,n-1);
		moveSingleDisk(start, dest);
		moveTower(tmp, dest, start,n-1);
	}
}
void moveSingleDisk(stack<char>& start, stack<char>& dest)
{
	dest.push(start.top());
	start.pop();
}
void moveTower(int n, char start, char finish, char tmp)
{
	if (n == 0)//if(n==1)
		return;//moveSingleDisk(start, finish);
	else
	{
		moveTower(n - 1, start, tmp, finish);
		moveSingleDisk(start, finish);
		moveTower(n - 1, tmp, finish, start);
	}
}
void fixCounts(Grid<bool>& mines, Grid<int>& counts)
{
	for (int i = 0; i < mines.numRows(); i++) {
		for (int j = 0; j < mines.numCols(); i++) {
			if (mines.inBounds(i, j + 1) && mines[i][j + 1])
				counts[i][j]++;
			if (mines.inBounds(i, j - 1) && mines[i][j - 1])
				counts[i][j]++;
			if (mines.inBounds(i + 1, j) && mines[i + 1][j])
				counts[i][j]++;
			if (mines.inBounds(i - 1, j) && mines[i - 1][j])
				counts[i][j]++;
		}
	}
}

/*string encodeCaesarCipher(const string & str, const int & shift)
{
	string result = "";
	for (int i = 0; i < str.length(); i++) {
		char ch = str[i];
		if (isupper(ch)) {
			if (ch + shift > 'Z')
				result[i] = ch + shift - 'Z' - 1 + 'A';
			else if (ch + shift < 'A')
				result[i] = 'Z' - 'A' + ch + shift + 1;
			else
				result[i] = ch + shift;
		}
		else if (islower(ch)) {
			if (ch + shift > 'z')
				result[i] = ch + shift - 'z' - 1 + 'a';
			else if (ch + shift < 'a')
				result[i] = 'z' - 'a' + ch + shift + 1;
			else
				result[i] = ch + shift;
		}
		else
			result[i] = ch;
	}
	return result;
}*/

