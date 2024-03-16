#include<iostream>
#include<vector>
using namespace std;

void getsubseq(int offset, vector<int> &seq_nums, int data[], int length, int sum)
{
	if(offset == length) {
		int temp_sum = 0;
		for(auto it : seq_nums) {
			cout << it << " ";
			temp_sum += it;
		}

		if(temp_sum == sum)
			cout << "found sum : " << sum;

		cout << "\n";
		return;
	}
	// this loop will go till last index	
	getsubseq(offset+1, seq_nums, data, length, sum);
	// push last element index
	seq_nums.push_back(data[offset]);
	// this will iterate from index to till last
	getsubseq(offset+1, seq_nums, data, length, sum);
	// removing last element
	seq_nums.pop_back();
}

int main()
{
	vector<int> out_nums;
	int seq_nums[8] = {2,4,6,5}, sum = 8;

	getsubseq(0, out_nums, seq_nums, 4, sum);

	return 0;
}
