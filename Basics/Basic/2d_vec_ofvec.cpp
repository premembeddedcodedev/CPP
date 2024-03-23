#include<iostream>
#include<vector>
using namespace std;

#define ROW 3
#define COL 3

void print(vector<vector<int>> data)
{
	for(int i = 0; i<ROW; i++) {
		cout << i << ":";
		for(int j=0; j<COL; j++) {
			cout << data[i][j];
		}
		cout << "\n";
	}
}

int main()
{
	vector<vector<int>> data;

	for(int i = 0; i<ROW; i++) {
		vector<int> v1;
		for(int j=0; j<COL; j++) {
			v1.push_back(j);
		}
		data.push_back(v1);
	}

	print(data);

	return 0;
}
