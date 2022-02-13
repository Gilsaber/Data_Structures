#include<iostream>
using namespace std;

int main()
{
	int marks[5] = {1,23,32,3,4};
	int *p = marks;
	
	cout << sizeof(marks) << endl;
	cout << sizeof(p) << endl;
	
	cout << &marks << endl << marks << endl;
	cout << &p << endl << p << endl;
	
//	cout << marks++; // gives us error bcoz marks = marks + 1 not valid 
	cout << p++ << endl;
	
//	p = marks;
//	marks = p;
	
	return 0;
}
