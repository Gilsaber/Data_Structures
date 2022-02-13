#include<iostream>
using namespace std;

void inc(int n)
{
	// base case
	if(n == 0)
	{
		return;
	}
	
	// recursive case
	
	inc(n - 1);
	cout << n << endl;
}

void dec(int n)
{
	
	// base case
	if(n == 0)
	{
		return;
	}
	
	// recursive case
	cout << n << endl;
	dec(n - 1);
}

int main()
{
	int n;
	cin >> n;
	
	inc(n);
	cout << endl;
	dec(n);
	
	return 0;
}
