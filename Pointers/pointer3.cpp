#include<iostream>
using namespace std;

int main()
{
	int marks[5] = {1,2,3,4,5};
	
	cout << marks << endl;  // address of 0th index of array
	cout << marks + 1 << endl; // address of 1st index of array
	
	cout << *marks + 1 << endl; // value at 1st index
	
	// Pointers and Constants
	
	int x = 20, y = 10;
	const int* ptr = &x; // non-const pointer to const int
//	int * const ptr = &x; // const pointer to non-const int
//	const int * const ptr = &x; // const pointer to const int
//	
	// Null pointers
	int *iptr = 0;
	cout << *iptr << endl; 
	int *xz = NULL;
	cout << xz << endl;
	return 0;
	
	// Uninitialized pointers
	int *qwe;
//	*qwe = 90; // -> make changes to the garbage location it's pointed to

}
