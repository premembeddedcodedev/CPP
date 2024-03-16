#include<iostream>
#include<set>
using namespace std;

void print(set<int> &st)
{
	for(auto i:st) {
		cout << i << ", ";
	}
}

int main()
{
	set<int> st;

	set<int, pair<int, int>> str;

	st.insert(1);
	st.emplace(1);

	st.insert(1);

	print(st);

	auto f = st.find(5);

	cout << "\nfinding 5 : " << &f;

	st.erase(3);

	cout << "\nerased :";

	print(st);

	cout << "\n";

	return 0;
}
