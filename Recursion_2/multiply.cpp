#include<iostream>
using namespace std;

int multiply(int m, int n)
{
	// Base case
	if(n == 0)
	{
		return 0;
	}
	
	// Recursive case and calculation
	int ans = m + multiply(m,n - 1); // while traversing
	return ans;
}

int main()
{
	int m, n;
	cin >> m >> n;
	
	int answer = multiply(m,n);
	cout << answer << endl;
	
	return 0;
}
