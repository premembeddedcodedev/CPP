#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<vector<int>> data(4);

	cout << "before : " << data[0].size() << "\n";
	
	for(int i = 0; i<4; i++) {
		data[i] = 10;
	}

	data[0].resize(3);

	cout << "After : " << data[0].size() << "\n";

	return 0;
}
