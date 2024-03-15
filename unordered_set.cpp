#include<iostream>
//#include <set>
#include <unordered_set>
using namespace std;

//Unique but not sorted in order

void print(unordered_set<int> &uset)
{
	cout << "\n";

	for(auto i : uset)
		cout << i << ", ";

}

int main()
{
	unordered_set<int> uset;

	uset.insert(122);
	uset.insert(132);
	uset.insert(23);
	uset.insert(100);
	uset.insert(20);
	uset.insert(10);

	print(uset);
	
	cout << "\n";

	return 0;
}
