#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> *v_data, int ncount, int ecount)
{
	for(auto j = 0; j<ncount; j++) {
		cout << j << "->";
		for(auto i : v_data[j]) {
			cout << i  << "->";
		}
		cout << "\n";
	}
}

void dfs(vector<int> *v_data, vector<bool> &visited, int offset)
{
	visited[offset] = true;
	cout << offset << ", ";

	for(int i=0;i!=v_data[offset].size();i++) {
		if(visited[v_data[offset][i]] == false)
			dfs(v_data, visited, v_data[offset][i]);
	}
}

int main()
{
	int ncount, ecount, u, v;

	cin >> ncount >> ecount;
	vector<bool> visited(ncount, false);
	vector<int> *v_data { new vector<int> [ncount]};

	for(int i=0; i<ecount;i++) {
		cin >> u >> v;
		v_data[u].push_back(v);
	}

	print(v_data, ncount, ecount);

	dfs(v_data, visited, 0);

	return 0;
}
