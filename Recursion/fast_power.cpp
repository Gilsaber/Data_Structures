#include<iostream>
using namespace std;

int fast_power(int num, int n)
{
	// base case
	if(n == 0)
	{
		return 1;
	}
	
	// recursive case
	// a[n] -> a[n/2] * a[n/2] if n is even otherwise a * a[n/2] * a[n/2]
	
	int small_ans = fast_power(num, n/2);
	small_ans *= small_ans; // even
	
	if(n % 2 != 0)
	{
		small_ans = num*small_ans; // if n is odd
	}
	return small_ans;
}

int main()
{
	int num,n;
	cin >> num >> n;
	
	cout << fast_power(num,n) << endl;
	
	return 0;
}
