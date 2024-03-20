#include<iostream>
#include<queue>

using namespace std;

int element;

void display(vector<int> v_data[], int ncount, int ecount)
{
	for(int i = element; i<ncount; i++) {
		cout << i << " : ";
		for(auto data : v_data[i])
			cout << data << "->";
		cout << "\n";
	}
}

void create_graph(vector<int> v_data[], int ncount, int ecount)
{
	int u, v;
	for(int i=0; i<ecount; i++) {
		cin >> u >> v;
		v_data[u].push_back(v);
	}

	cout << "\nGraph values: " << "\n";

	display(v_data, ncount, ecount);
}

void bfs(int start, vector<int> v_data[], vector<bool> visited)
{
	queue<int> q_data;
	q_data.push(start);
	visited[start] = true;

	while(!q_data.empty()) {
		int curr = q_data.front();
		q_data.pop();
		
		cout << "element dequeue : " << curr << "\n";
		for(auto i = 0; i!= v_data[curr].size(); i++) {
			if(!visited[v_data[curr][i]]) {
				q_data.push(v_data[curr][i]);
				visited[v_data[curr][i]] = true;
			}
		}
	}
}

int main()
{
	int n_count, e_count;

	cin >> n_count >> e_count; 
	cout << "nodes: " << n_count << "edges: " << e_count << "\n";

	vector<int> v_data[n_count];
	vector<bool> visited(n_count, false);

	create_graph(v_data, n_count, e_count);

	cout << "Enter the bfs element to start : \n";
	cin >> element;

	bfs(element, v_data, visited);
}
