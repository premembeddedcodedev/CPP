#include <iostream>
#include <queue>

using namespace std;

void print(queue<int> q)
{
	queue<int> bkup = q;

	while(!bkup.empty()) {
		cout << bkup.front() << ", ";
		bkup.pop();
	}
}

int main()
{
	queue<int> q;

	q.push(1);
	q.push(4);
	q.push(2);
	q.push(5);

	print(q);
	
	q.pop();
	
	cout << "\nqshow: ";

	print(q);

	return 0;
}
