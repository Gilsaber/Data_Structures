#include<iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
	// base case
	
	if(n == 0 || n == 1)
	{
		return true;
	}
	
	// recursive case
	
	if(arr[0] < arr[1] && isSorted(arr + 1, n - 1))
	{
		return true;
	}
	
	return false;
}

int main()
{
	int arr[5] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout << isSorted(arr,n) << endl;
	
	return 0;
}
