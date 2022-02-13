#include<iostream>
using namespace std;

void head_recursion(int n)
{
	cout << n << " ";
	if(n == 0)
	{
		return;
	}
	head_recursion(n - 1);
}

int main()
{
	head_recursion(5);
	
	return 0;
}
