#include <iostream>
#include <map>
using namespace std;

//unique keys are in sorted order

int main()
{
	map<int, int> mp;
	map<int, pair<int, int>> mpp;
	map<pair<int, int>, int> mpq;

	mp[1] = 1;

	mpp[1] = {1, 2};

	mpq[{1,2}] = 2;

	return 0;
}
