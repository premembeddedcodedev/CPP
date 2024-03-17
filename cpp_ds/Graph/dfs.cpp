//Refrrence: https://www.youtube.com/watch?v=YYq38LTz774&list=PLEJXowNB4kPzByLnnFYNSCoqtFz0VKLk5&index=4
#include<iostream>
#include<vector>
#include <cstring>
using namespace std;

void gp_dfs(int offset, vector<int> gp[], bool varr[])
{
	varr[offset] = true;
	cout << offset << " ";

	for(int i = 0; i<gp[offset].size(); i++) {
		if(varr[gp[offset][i]] == false)
			gp_dfs(gp[offset][i], gp, varr);
	}
}

int main()
{
	int n, e;

	cin >> n >> e;
	bool varr[n];

	memset(varr, 0, sizeof(varr));

	vector<int> gp[n];

	for(int i =0; i<e; i++) {
		int u, v;
		cin >> u >> v;
		gp[u].push_back(v);
	}
	
	gp_dfs(0, gp, varr);
}
