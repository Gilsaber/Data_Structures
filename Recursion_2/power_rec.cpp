#include<iostream>
using namespace std;

int power_rec(int number,int n) {
	
	// Base case
	if(n == 0) {
		return 1;
	}
	
	int ans;
	
	// Recursive Case and Calculation
	ans = number * power_rec(number,n-1);
	
	return ans;
}

int main() {
	int number,n;
	cin >> number >> n;
	
	cout << power_rec(number,n) << endl;
	
	return 0;
}
