#include<iostream>
using namespace std;

void printArray(int[][3], int);

int main()
{
	int myArray[][3] = {{8,2,4},{7,5,2}}; // 2 * 3 initialized
	// Only the first index can be omitted not the second in 2-d arrays
	
	printArray(myArray,2);
	
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << myArray[i][j] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}

void printArray(int Array[][3], int rows)
{
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			Array[i][j] = 0;
		}
	}
}
