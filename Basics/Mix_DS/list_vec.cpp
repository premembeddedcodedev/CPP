#include <iostream>
#include <vector>
#include <list>

using namespace std;

list <int> solve( vector <int> ip) {
	//initialise the list
	list <int> op( ip.begin(), ip.end() );
	return op;
}

int main()
{
	vector <int> ip( { 15, 20, 65, 30, 24, 33, 12, 29, 36, 58, 96, 88, 30, 71 } );
	list <int> op = solve( ip );

	//display the input
	cout<< "The input vector is: ";
	for( int i : ip ) {
		cout<< i << " ";
	}

	//display the output
	cout << "\nThe output list is: ";
	for( int j : op ) {
		cout << j << " ";
	}
	return 0;
}
