// recursion calculates answer from bottom 
// but for iteration we have to calculate while traversing not at returning time

#include<iostream>
using namespace std;

int fib_iterative(int n) {
	
	int first = 0, second = 1; // base case became declarative statements
	
	int ans;
	
	for(int i = 2; i <= n; i++) {
		ans = first + second;
		first = second;
		second = ans;
	}
	
	return ans;
}

int main() {
	int n; 
	cin >> n;
	
	cout << fib_iterative(n) << endl;
	
	return 0;
}
