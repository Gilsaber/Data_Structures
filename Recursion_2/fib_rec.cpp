#include<iostream>
using namespace std;

int fib_rec(int n) {
	
	// Base case
	if(n == 0 || n == 1) {
		return n;
	}
	
	// Recursive Case and calculation
	int ans = 0;
	ans = fib_rec(n - 1) + fib_rec(n - 2);
	
	return ans;
}

int main() {
	int n;
	cin >> n;
	
	cout << fib_rec(n) << endl;
	
	return 0;
}
