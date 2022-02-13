#include<iostream>
using namespace std;

int missing_element(int arr[], int n)
{
	int q = arr[1] - arr[0],count = 0;
	
	for(int i = 1; i < n; i++)
	{
		if((arr[i] - arr[i - 1]) != q)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int n;
	cin >> n;
	
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	int ans = missing_element(a,n);
	cout << ans << " ";
	
	return 0;
}
