#include<iostream>
using namespace std;

int count_no_of_zeroes(int n)
{
	// Base Case
	if(n == 0)
	{
		return 0;
	}
	
	// Recursive Case and Calculation
	// Check if the current remainder is 0 or not if it is then add 1 otherwise not
	
	int smallans = count_no_of_zeroes(n/10);
	
	if(n % 10 == 0)
	{
		return 1 + smallans;
	}
	else
	{
		return smallans; // if there is none then everytime 0 is returned
	}
}

int main()
{
	int n;
	cin >> n;
	
	int count = count_no_of_zeroes(n);
	cout << count << endl;
	
	return 0;
}
