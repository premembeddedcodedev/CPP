#include<iostream>
//https://stackoverflow.com/questions/57483/what-are-the-differences-between-a-pointer-variable-and-a-reference-variable
using namespace std;

void function(int &a, int &b, int *c)
{
	//a = 20;
	//b = 30;
	*c = 90;
}

int main()
{
	int a = 10;
	int &b = a;
	int *c = &a;
//	int &d; ==> error

	cout << "value of a : " << a << "\n";
	cout << "value of b : " << b << "\n";
	cout << "value of b : " << *c << "\n";

	cout << "address of a : " << &a << "\n";
	cout << "address of b : " << &b << "\n";
	cout << "address of c : " << c << "\n";
	
	function(a, b, c);
	
	cout << "value of a : " << a << "\n";
	cout << "value of b : " << b << "\n";
	
	return 0;
}
