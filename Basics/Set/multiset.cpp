#include<iostream>
#include<set>
using namespace std;

void print(multiset<int> ms)
{
	cout << "\n";
	for(auto i : ms)
		cout << i;
}

int main()
{
	multiset<int> ms;
	
	multiset<int, pair<int, int>> cs;

	ms.insert(1);
	ms.insert(2);
	ms.insert(3);
	ms.insert(1);

	int count = ms.count(1);

	cout << "count : " << count;

	print(ms);

	cout << "\n";

	return 0;
}
