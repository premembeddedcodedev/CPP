#include <iostream>
#include <vector>
#include <cstring>
#include <queue>

using namespace std;

void gp_bfs(int offset, vector<int> g[], bool varr[])
{
	queue<int> q;

	q.push(offset);
	varr[offset] = true;
	
	while(!q.empty()) {
		int current = q.front();
		q.pop();
		cout << current << " ";
		for(int i = 0; i<g[current].size(); i++) {
			if(varr[g[current][i]] == false) {
				q.push(g[current][i]);
				varr[g[current][i]] = true;
			}

		}
	}
}

int main()
{
	int n, e, u, v;
	cin >> n >> e;

	vector<int> g[n];
	bool varr[n] = {false};

	for(int i = 0; i<e; i++) {
		cin >> u >> v;
		g[u].push_back(v);
	}

	gp_bfs(0, g, varr);

	return 0;
}
