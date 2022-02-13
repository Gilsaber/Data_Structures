#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	
	cout << &a << endl; // &a -> address of a ( which in turn converted to hexadecimal from decimal )
	
	float b = 29;
	cout << &b << endl; // converted from decimal to hexadecimal 
	
	char c = 'a';
	cout << &c << endl; // gives a to get the address typecasting has to be done
	
	string d = "abc";
	cout << &d << endl;
	
	cout << (void *) &c << endl;
	cout << (int *) &c << endl;
}
