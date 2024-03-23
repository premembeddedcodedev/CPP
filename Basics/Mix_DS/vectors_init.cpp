#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int i = 5;
	vector<int> vInts2 (10, i);

	for(auto i : vInts2) {
		cout << "Value : " << i << "\n";
	}

	vector<int> vInts3(vInts2);
	for(auto i : vInts3) {
		cout << "Valuei-3 : " << i << "\n";
	}

	vector<int> vInts4 {1,2,3,4,5};
	for(auto i : vInts4) {
		cout << "Valuei-3 : " << i << "\n";
	}

	return 0;
}
