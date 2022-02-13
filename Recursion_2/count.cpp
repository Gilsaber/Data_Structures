#include<iostream>
using namespace std;

int length_of_integer(int n)
{
	// Base Case
	if(n == 0) 
	{
		return 0;
	}
	
	// Recursive case and calculation
	int ans = length_of_integer(n/10) + 1; // addn. will be done while returning not while traversing
	return ans;
}

int main()
{
	int n;
	cin >> n;
	
	int answer = length_of_integer(n);
	cout << answer << endl;
	
	return 0;
}
