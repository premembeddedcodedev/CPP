#include <iostream>

using namespace std;

int main(void) {

	int num;

	int *array{ new int[6]{ 1,2,3,4,5,6} };

	cout << "Array elements: " << endl;

	for (num = 0; num < 6; num++) {

		cout << array[num] << endl;

	}

	int **ap;

	ap = new int *[5];

	for(int i = 0; i<5; i++) {
		ap[i] = new int [6];
		for(int j=0; j<6; j++) {
			ap[i][j] = 89;
		}
	}
	for(int i = 0; i<5; i++) {
		for(int j=0; j<6; j++) {
			cout << ap[i][j] << ", ";
		}
	}

	cout << "\n";

	int *p = new int(20); //<<<=== Assigning value to 20 ===>>>

	cout << "value : " << *p << "\n";
	
	int *q {new (nothrow) int(40)}; //<<<=== Assigning value to 20 ===>>>
	
	cout << "value-2 : " << *q << "\n";

	//nothrow usage would be to avoid exception incase of no memory otherwise set to NULL

	int *a[5] = new int *[5];

	return 0;
}
