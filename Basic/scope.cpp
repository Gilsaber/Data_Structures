#include<iostream>
using namespace std;

int x = 100; // global variable

int main()
{
	int x = 10;
	cout << x << endl; // 10 is going to get printed
	
	cout << ::x << endl; // scope resolution variable , global variable printed
	
	return 0;
}
