#include<iostream>
#include <queue>
using namespace std;

class Solution {
public:
	int LastStoneWeight(vector<int> &stones) {
		priority_queue <int> max_heap;
		int n = stones.size(), first, second;

		for(int i=0; i<n; i++)
			max_heap.push(stones[i]);

		while(n>1) {
			first = max_heap.top();
			max_heap.pop();
			second = max_heap.top();
			max_heap.pop();
			n -= 2;

			if(first-second > 0) {
				max_heap.push(first-second);
				n += 1;
			}
		}
		if(!max_heap.empty())
			return max_heap.top();

		return 0;
	}
};

int main()
{
	class Solution Sn;
	//vector<int> stones{1,7,5,3,6,2};//7,6,5,3,2,1
	//vector<int> stones{2, 7, 4, 10};
	//vector<int> stones{2, 7, 4, 1, 8, 1};
	vector<int> stones{8, 1, 3, 2, 6, 7};

	cout << "Last Stone Weight : " << Sn.LastStoneWeight(stones) << "\n";

	return 0;
}
