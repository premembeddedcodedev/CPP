#include<iostream>
#include<vector>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	vector<int> vc;
	queue<int> q_c;
	stack<int> s_c;

	vc.push_back(10);
	vc.push_back(20);
	vc.push_back(30);
	vc.push_back(40);
	vc.push_back(50);

	for(auto check : vc) {
		cout << "check : " << check << "\n";
		s_c.push(check);
	}

	for(auto i = vc.begin(); i<vc.end(); i++) {
		cout << "check : " << *i << "\n";
		q_c.push(*i);
	}

	while(!q_c.empty()) {
		cout << "front: " << q_c.front() << "rear: " << q_c.back() << "\n";
		q_c.pop();
	}
	
	while(!s_c.empty()) {
		cout << "top : " << s_c.top() << "\n";
		s_c.pop();
	}

	return 0;
}
