#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> lst;

	lst.push_back(10);
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

	return 0;
}
