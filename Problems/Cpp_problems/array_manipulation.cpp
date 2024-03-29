//https://www.hackerrank.com/challenges/crush/problem?isFullScreen=true
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'arrayManipulation' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY queries
 */

long arrayManipulation(int n, vector<vector<int>> queries) {
        vector<long> sum(n+1, 0);
        long min = INT_MIN;
        int offset = queries[0].capacity()-1;

        cout << "size: " << queries.size() << "\n";

        for(int i = 0; i<queries.size(); i++) {
                int ll = queries[i][0];
                int ul = queries[i][1];
                for(int j = 1; j<=n; j++) {
                        if((j >= ll) && (j <= ul))
                                sum[j] += queries[i][offset];

                        if(min < sum[j])
                                min = sum[j];
                }
        }

        return min;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	string first_multiple_input_temp;
	getline(cin, first_multiple_input_temp);

	vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

	int n = stoi(first_multiple_input[0]);

	//cout << "n : " << n;

	int m = stoi(first_multiple_input[1]);
	
	//cout << "m : " << m;

	vector<vector<int>> queries(m);

	//cout << "before resized: " << queries[1].size();

	for (int i = 0; i < m; i++) {
		queries[i].resize(3);

		string queries_row_temp_temp;
		getline(cin, queries_row_temp_temp);

		vector<string> queries_row_temp = split(rtrim(queries_row_temp_temp));

		for (int j = 0; j < 3; j++) {
			int queries_row_item = stoi(queries_row_temp[j]);

			queries[i][j] = queries_row_item;
		}
		//queries[i].resize(m);
	}

	//cout << "after resized: " << queries[1].size();

	long result = arrayManipulation(n, queries);

	cout << result << "\n";

	fout.close();

	return 0;
}

string ltrim(const string &str) {
	string s(str);

	s.erase(
			s.begin(),
			find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
	       );

	return s;
}

string rtrim(const string &str) {
	string s(str);

	s.erase(
			find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
			s.end()
	       );

	return s;
}

vector<string> split(const string &str) {
	vector<string> tokens;

	string::size_type start = 0;
	string::size_type end = 0;

	while ((end = str.find(" ", start)) != string::npos) {
		tokens.push_back(str.substr(start, end - start));

		start = end + 1;
	}

	tokens.push_back(str.substr(start));

	return tokens;
}

