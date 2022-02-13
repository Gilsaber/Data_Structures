#include<iostream>
using namespace std;

int pow(int number,int n)
{
	// base case
	if(n == 0)
	{
		return 1;
	}
	
	// recursive case
	int ans = number * pow(number, n - 1);
	return ans;
}


int main()
{
	int number, n;
	cin >> number >> n;
	
	cout << pow(number,n) << endl;
	
	return 0;
}
