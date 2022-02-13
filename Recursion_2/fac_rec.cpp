#include<iostream>
using namespace std;

int fib(int n) {
	
	int ans;
	
	// Base case
	if(n == 0) {
		return 1;
	}
	
	// Recursive case(calling itself) and calculation
	ans = n * fib(n - 1);
	
	return ans; // calculation while returning and giving the ans to the current ans
}

int main() {
	int n;
	cin >> n;
	
	cout << fib(n) << endl;
	
	return 0;
}
