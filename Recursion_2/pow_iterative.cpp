#include<iostream>
using namespace std;

int pow_iterative(int number,int n) {
	int ans = 1;
	
	for(int i = 1; i <= n; i++) {
		ans = ans * number;
	}
	
	return ans;
}

int main() {
	int number, n;
	
	cin >> number >> n;
	
	cout << pow_iterative(number,n) << endl;
	
	return 0;
}
