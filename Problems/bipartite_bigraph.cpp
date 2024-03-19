#include<iostream>
#include<set>
#include<vector>

using namespace std;

void parition(vector<int> ctlist[n], int edges)
{
	set<int> s, t;
	s.insert(10);

	for(int i=1; i<n; i++) {
		cout << i << "->";
		for(auto j : ctlist[i]) {
			cout << j << "->";
		}
		cout << "\n";
	}


}

int main()
{
	int n, e;

	cin >> n >> e;

	vector<int> ctlist[n];

	int u, v;
	for(int i = 0; i<e; i++) {
		cin >> u >> v;
		ctlist[u].push_back(v);
	}

	for(int i=1; i<n; i++) {
		cout << i << "->";
		for(auto j : ctlist[i]) {
			cout << j << "->";
		}
		cout << "\n";
	}

	parition(ctlist, e);

	return 0;
}
