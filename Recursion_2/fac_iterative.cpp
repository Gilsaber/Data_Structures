#include<iostream>
using namespace std;

int fib_iterative(int n) {
	
	int ans = 1;
	for(int i = n; i > 0; i--)
	{
		ans = ans * i;
	}
	
	return ans;
}

int main() {
	int n;
	cin >> n;
	
	cout << fib_iterative(n) << endl;
	
	return 0;
}
