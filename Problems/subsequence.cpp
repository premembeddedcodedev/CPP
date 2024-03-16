#include<iostream>
#include<vector>
using namespace std;

void getsubseq(int offset, vector<int> &seq_nums, int data[], int length)
{
	if(offset == length) {
		for(auto it : seq_nums) {
			cout << it << " ";
		}
		cout << "\n";
		return;
	}
	// this loop will go till last index	
	getsubseq(offset+1, seq_nums, data, length);
	// push last element index
	seq_nums.push_back(data[offset]);
	// this will iterate from index to till last
	getsubseq(offset+1, seq_nums, data, length);
	// removing last element
	seq_nums.pop_back();
}

int main()
{
	vector<int> out_nums;
	int seq_nums[8] = {2,4,6,5};

	getsubseq(0, out_nums, seq_nums, 4);

	return 0;
}
