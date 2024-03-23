#include<iostream>
#include <queue>
using namespace std;

void print_d(priority_queue <int> pq, int n)
{
	cout << "elements are : ";

	while(!pq.empty()) {
		cout << pq.top() << ", ";
		pq.pop();
	}

	cout << "\n";
}

void print_d(priority_queue <int, vector<int>, greater<int>> pq, int n)
{
	cout << "elements are : ";

	while(!pq.empty()) {
		cout << pq.top() << ", ";
		pq.pop();
	}

	cout << "\n";
}

int main()
{
	priority_queue <int> pqmax(10, 0);
	priority_queue <int, vector<int>, greater<int>> pqmin(5,0);

	print_d(pqmax, 5);
	
	pqmax.push(70);
	pqmax.push(60);
	pqmax.push(90);
	pqmax.push(80);
	pqmax.push(40);

	print_d(pqmax, 5);
	
	print_d(pqmin, 5);
	
	pqmin.push(70);
	pqmin.push(60);
	pqmin.push(90);
	pqmin.push(80);
	pqmin.push(40);

	print_d(pqmin, 5);
}
