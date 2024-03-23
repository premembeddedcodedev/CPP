#include<iostream>
using namespace std;

int main()
{
	pair<int, int> p = {1,2};

	cout << "first: " << p.first << "second: " << p.second;

	pair<int, pair<int, int>> check {24, {78,67}};

	cout << "fist: " << check.first << "second: " << check.second.first;

	pair<int, int> arr[] {{71,72}, {63,64}, {45,46}};

	cout << "first: " << arr[0].first << "\n";

	return 0;
}
