#include<iostream>
using namespace std;

int main()
{
	int a = 10, z = 20;
	
	// store the address of the variable
	int *b = &a;
	
	cout << &a << endl; // address of a
	cout << b << endl; // address of a
	
	cout << b << endl; // address of a or value of b
	cout << *b << endl; // dereferencing gives the value of the address
	cout << &b << endl; // address of b
	
	char c = 'c';
	char *d = &c;
	
	cout << sizeof(a) << endl;  // 4 bytes
	cout << sizeof(b) << endl; // size of integer pointer -> 8 bytes
	cout << sizeof(c) << endl; // 1 byte
	cout << sizeof(d) << endl; // size of character pointer -> 8 bytes
	
	// Re-assign another address to the pointer variable
	b = &z;
	cout << b << endl << *b << endl;
}
