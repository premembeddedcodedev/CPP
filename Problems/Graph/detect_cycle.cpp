#include<iostream>
#include<vector>

using namespace std;

//{ 0, 1 -> 
//2, 1 -> 
//4, 2 -> 
//2, 3 -> 
//3, 4 -> 
//4, 0 }

bool is_cyclic_util(vector<int> adjlst[], vector<bool> visarr, int curr)
{
	if(visarr[curr] == true)
		return true;

	visarr[curr] = true;
	bool flag = false;

	for(int i=0; i<adjlst[curr].size(); i++) {
		flag = is_cyclic_util(adjlst, visarr, adjlst[curr][i]);
		if(flag == true)
			return true;
	}

	return false;	
}

bool detect_cycle(int edges, vector<int> adjlst[], int limit)
{
	vector<bool> visarr(edges, false);
	bool flag = false;

	for(int i = 0; i<edges; i++) {
		visarr[i] = true;
		for(int j=0;j<adjlst[i].size();j++) {
			flag = is_cyclic_util(adjlst, visarr, adjlst[i][j]);
			if(flag == true)
				return true;
		}
		visarr[i] = false;
	}

	return false;
}

int main()
{
	int nodes, edges, u, v;

	cin >> nodes >> edges;

	//vector<int> *adjlst;
	vector<int> adjlst[nodes];
	//vector<int> *adj;

	//adjlst = new vector <int>(nodes);

	for(int i = 0; i<edges; i++) {
		cin >> u >> v;
		adjlst[u].push_back(v);
	}

	cout << "cycle : " << detect_cycle(edges, adjlst, nodes);

	return 0;
}
