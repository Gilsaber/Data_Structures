#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int a[n];
	
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	vector<int> ans;
	int lastDuplicate = 0;
	
	for(int i = 0; i < n - 1; i++)
	{
		if(a[i] == a[i + 1] && a[i] != lastDuplicate)
		{
			ans.push_back(a[i]);
			lastDuplicate = a[i];	
		}	
	}
	
	int size = ans.size();
	for(int i = 0; i < size; i++)
	{
		cout << ans[i] << " ";
	}
	cout << "\n\n";
}
