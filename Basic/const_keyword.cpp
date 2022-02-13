#include<iostream>
using namespace std;

int main()
{
	const int a = 4;
//	a = 5; // error anything declared as constant it's value can't be changed
	// that variable became read only and you can't update that variable , object or ADT
	
	const int arr[3] = {1,2,3};
//	arr[1] = 5; // not possible
	
	cout << a << endl;
	
	return 0;
}
