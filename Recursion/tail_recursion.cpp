#include<iostream>
using namespace std;

void tail_recursion(int n)
{
	if(n == 0)
	{
		return ;
	}
	cout << n << " ";    // front traversal
	tail_recursion(n - 1);
	cout << n << " ";	// back traversal
}

int main()
{
	tail_recursion(5);
	
	return 0;
}
