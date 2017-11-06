

#include "stdafx.h"
#include"smallCla.h"
#include<vector>
#include<queue>
const double halflife = 0.5;
int main()
{
	stack<char> mission,dest,tmp;

	for (char i = 'a'; i <= 'd'; i++)
		mission.push(i);

	moveTower(mission, dest,tmp,mission.size());
	while (!dest.empty()) {
		cout << dest.top()<<endl;
		dest.pop();
	}
	getchar();
	return 0;
}