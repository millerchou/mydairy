

#include "stdafx.h"
#include"smallCla.h"
const double halflife = 0.5;
int main()
{
	MyRandom a;
	//a.setRandomSeed(1);
	int sum = 10000;
	int year = 0;
	while(sum>0){
		int max = sum;
		for (int i = 0; i < max; i++)
			if (a.randomChance(halflife))
				sum--;
		cout << "there are " << sum << " atoms at the end of " << ++year << endl;
	}
	getchar();
	return 0;
}