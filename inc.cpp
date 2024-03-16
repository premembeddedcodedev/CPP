#include <iostream>
using namespace std;

void increase1(int &value) {
	value++;
}

void increase2(int *value) {
	(*value)++;
} 

void increase3(int value) {
	value++;
}

int main() {
	int number = 5;

	increase1(number);
	cout << "1st number: " << number << "\n";
	
	increase2(&number);
	cout << "2nd number: " << number << "\n";

	increase3(number);
	cout << "3rd number: " << number << "\n";

	return 0;
}
