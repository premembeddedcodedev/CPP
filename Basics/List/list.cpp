#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
	list<int> lst;

	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);
	lst.push_back(40);
	lst.push_back(50);
	lst.push_back(60);
	lst.push_back(70);
	lst.push_back(80);
	lst.push_back(90);
	lst.emplace_back(4);

	lst.push_front(2);
	lst.emplace_front(3);

	
	//for(auto i : lst)
	for(auto i=lst.begin(); i != lst.end(); i++)
		cout << *i << "\n";

	auto address = lst.begin();

	cout << "begin : " << &address << "\n";
	//cout << "begin : " << &lst.begin() << "\n"; //TODO

	lst.reverse();
	auto address1 = lst.begin();
	cout << "begin : " << &address1 << "\n";

	auto pos = find(lst.begin(), lst.end(), 30);

	if(pos!=lst.end())
		cout << "search found: \n";
	else
		cout << "search not found: \n";

	return 0;
}
