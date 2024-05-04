#include<iostream>
#include<map>
#include <climits>
#include <cstring>

using namespace std;

int lengthOfLongestSubstring(string s)
{
	int l = 0, r = 0, maxlen = INT_MIN;
	map<int, int> mp;

	cout << "string size : " << s.size() << "\n";
	
	// map default is 0	
	cout << "string : " << mp[s[0]] << "\n";
	for(int it = 0;it != 256; ++it) {
		mp[it] = -1;
	}
	
	for(r=0; r<s.size(); r++) {
		
		if(mp[s[r]] != -1 && (mp[s[r]] >= l))
			l = mp[s[r]] + 1;
		
		if(maxlen < (r-l+1))
			maxlen = r-l+1;
		
		mp[s[r]] = r;
	}

	return maxlen;
}

int main()
{
	string str = "abcabcbb"; //"bbbbb";

	cout << "maxlen : " <<  lengthOfLongestSubstring(str) << "\n";

	return 0;
}
