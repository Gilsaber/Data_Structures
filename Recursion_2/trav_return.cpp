#include<iostream>
using namespace std;

int ans = 0;

int sum_traversing_returning_rec(int n) {
	
	// Base case
	if(n == 1 || n == 0)
	{
		return n;
	}
	int sum;
	// Recursive case and calculation
	ans = ans + n;  // in traversing most times it's returning 0 bcoz it's used to stop the program
	sum = n + sum_traversing_returning_rec(n - 1); // while returning
	
	cout << ans << endl;
	return sum;
	
}

int main() {
	int n;
	cin >> n;
	
	cout << sum_traversing_returning_rec(n) << endl;
	
	return 0;
}
