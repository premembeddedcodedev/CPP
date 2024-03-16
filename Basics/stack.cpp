#include<iostream>
#include<stack>

using namespace std;

int main()
{
	stack<int> stk;

	stk.push(20);
	stk.push(40);
	stk.push(50);
	stk.push(60);

	cout << "top : " << stk.top();
	stk.pop();
	cout << "\ntop now: " << stk.top() << "\n";

	return 0;
}
