#include<iostream>
#include<vector>

using namespace std;

void print_nodes(vector<int> *vptr, int n, int e)
{
	for(int i=0; i<n; i++) {
		cout << i << " : ";
		for(int j =0; j<vptr[i].size(); j++) {
			cout << vptr[i][j] << " -> ";
		}
		cout << "\n";
	}
}

bool is_cycled(vector<int> *vptr, vector<bool> &visitarr, int offset)
{
	if(visitarr[offset] == true)
		return true;
	
	visitarr[offset] = true;

	for(int i = 0; i<vptr[offset].size(); i++) {
		if(is_cycled(vptr, visitarr, vptr[offset][i]))
				return true;
        }

	return false;
}

bool detect_cycle(vector<int> *vptr, vector<bool> &visitarr, int offset)
{
	bool flag;

	for(int i = 0; i<vptr[offset].size(); i++) {
		visitarr[offset] = true;
		if(visitarr[vptr[offset][i]] == false)
			flag = is_cycled(vptr, visitarr, vptr[offset][i]);
			if(flag == true)
				return true;
		visitarr[offset] = false;
	}

	return false;
}
int main()
{
	static int n, e, u, v;
	cin >> n >> e;

	vector<int> *vptr{new vector<int> [n]};

	for(int i = 0; i<e; i++) {
		cin >> u >> v;
		vptr[u].push_back(v);
	}

	vector<bool> visitarr(n, false);

	print_nodes(vptr, n, e);

	cout << (detect_cycle(vptr, visitarr, 0) ? "cycle detected\n" : " ") << "no cycle\n";

	//cout << "cycled ? : " << detect_cycle(vptr, visitarr, 0) << "\n";

	return 0;
}
