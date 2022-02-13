#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int *xptr = &a;
	
	cout << &a << endl;
	cout << xptr << endl; // address of a
	
	cout << a << endl;
	cout << *(&a) << endl; // value at address
	cout << *xptr << endl; // dereferencing operator
	
	cout << *(xptr + 1) << endl; // gives garbage value -> xptr can be replaced by &a
	cout << *(xptr) + 1 << endl; // value of a changes
	
	cout << &(a) << endl;
	cout << &(*xptr) << endl;
	cout << *(&xptr) << endl;
	
	// Double pointer
	
	int **xxptr = &xptr;
	cout << xxptr << endl; // value of xxptr
	cout << &xptr << endl; // address of xptr or value of xxptr
	cout << *xxptr << endl; // dereferencing xxptr or value of xptr
	cout << xptr << endl;
	cout << **xxptr << endl; // dereferencing xptr
	cout << *xptr << endl; // dereferencing xptr
	return 0;
	
}
