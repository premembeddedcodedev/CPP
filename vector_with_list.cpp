#include<iostream>
#include<vector>
#include<list>

using namespace std;
//TODO why & is required here... without & is also working output
void print(list<vector<int>> &listvec)
{
	for(auto vec : listvec) {
		vector<int> currentvec = vec;
		cout << "[";

		for(auto i : currentvec)
			cout << i << " ";

		cout << "]";
	}
}

int main()
{
	list<vector<int>> listvec;

	vector<int> v1, v2, v3;

	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	listvec.push_back(v1);

	v2.push_back(5);
	v2.push_back(6);
	v2.push_back(7);
	listvec.push_back(v2);
	
	v3.push_back(8);
	v3.push_back(9);
	v3.push_back(0);
	listvec.push_back(v3);

	print(listvec);

	return 0;
}
