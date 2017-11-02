

#include "stdafx.h"
#include"smallCla.h"
#include<vector>
const double halflife = 0.5;
int main()
{
	MyRandom a;
	vector<bool> allhead;
	int count = 0;

	while (1) {
		count++;
		if (a.randomChance(halflife)) {
			cout << "heads" << endl;
			allhead.push_back(true);
			if (allhead.size() == 3 && allhead[0] && allhead[1])
				break;
		}
		else {
			cout << "tails" << endl;
			allhead.swap(vector<bool>());
		}
	}
	cout << "it took " << count << " flips to get 3 consecutive heads.";
	getchar();
	return 0;
}