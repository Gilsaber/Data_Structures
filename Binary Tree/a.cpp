// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    int a[n],b[n],count = 0, count2 = 0, j = 0,k = 0;
	    
	    for(int i = 0; i < n; i++)
	    {
	        if(arr[i] >= 0)
	        {
	            a[j] = arr[i];
	            j++;
	            count++;
	        }
	    }
	    
	    for(int i = 0; i < n; i++)
	    {
	        if(arr[i] < 0)
	        {
	            a[k] = arr[i];
	            k++;
	            count2++;
	        }
	    }
	    
	    int x = 0, y = 0;
	    for(int i = 0; i < n; )
	    {
	        if(i < count)
	        {
	            arr[i] = a[x];
	            x++;
	            i++;
	        }
	        if(i < count2)
	        {
	            arr[i] = b[y];
	            y++;
	            i++;
	        }
	    }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
