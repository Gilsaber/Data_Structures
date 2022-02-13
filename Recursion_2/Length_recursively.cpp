#include<iostream>
using namespace std;

int length(char input[])
{
	// Base case
	if(input[0] == '\0') // means end of the string
	{
		return 0;
	}
	
	// Recursive case and calculation
	int ans = 1 + length(input + 1);
	return ans;
}

int main()
{
	char input[100];
	cin >> input;
	int l = length(input);
	cout << l << endl;
	
	return 0;
}
