#include<iostream>
using namespace std;

int main()
{
	int x;
	cin >> x; // cin doesn't take spaces into consideration and ends with newline character
	
	if(x == 5)
	{
		cout << "allowed" << endl;
	}
	else if(x == 5)
	{
		cout << "not possible" << endl;
	}
	else
	{
		cout << "you can't allow this" << endl;
	}
	
	// only one of them is going to be executed always
	
	return 0;
}
