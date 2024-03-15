#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> x;

	for(auto i=0; i<5; i++)
		x.push_back(i*22);

	//x.assign(2, 10); //entire array assigning

	for(auto i=x.cbegin(); i<x.cend(); i++)
		cout << *i << "\n";

	cout << "capacity : " << x.capacity() << "\n";
	cout << "size : " << x.size() << "\n";

	cout << "empty check: " << x.empty() << "\n";

	int *pos = x.data(); //first element address
	cout << "address: " << *pos << "\n";

	cout << "at pos: " << x.at(2) << "\n";
	cout << "at pos: " << x[2] << "\n";

	return 0;
}
