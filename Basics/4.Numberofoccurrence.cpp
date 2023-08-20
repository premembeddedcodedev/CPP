#include<bits/stdc++.h>

//https://practice.geeksforgeeks.org/explore?page=1&category[]=Arrays&sortBy=submissions

using namespace std;

class solution {
	public:
		int count(int arr[], int n, int x) {
			
			return 0;			
		}
};

int main()
{
	int t;

	cin >> t;

	while(t-->=0) {
		int n, x;
		cin >> n >> x;

		int arr[n];

		for(int i=0; i<n; i++) {
			cin >> arr[i];
		}

		solution ob;
	
		auto ans = ob.count(arr, n, x);
		cout << ans << "\n";
	}

	return 0;
}
