#include<iostream>
using namespace std;

int main()
{
	int n,sum = 0, rem;
	cin >> n;
	
	for(int j = 1; n > 0; j = j * 2)
	{
		rem = n % 10;
		n = n / 10;
		sum = sum + rem * j;
	}
	cout << sum << endl;
	
	return 0;
}
