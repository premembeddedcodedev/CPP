//Reference:  https://www.geeksforgeeks.org/strings-in-cpp/

#include <iostream>

using namespace std;

int main()
{
	string str = "Praveen";
	string lom("Raj");
	string &ptr = str;

	string ch = str;

	cout << " string : " << ch << "\n";

	//cin >> str;
	getline(cin, str);

	cout << "string-2 : " << str << "\n";

	return 0;
}
