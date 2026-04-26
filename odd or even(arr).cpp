#include <iostream>
using namespace std;
int main()
{
	int arr[] = {12,3,2,34,11};
	int n = 5;
	int even_Count = 0;
	int odd_Count = 0;
	for (int i = 0; i < n; i++)
	{
		if(arr[i] % 2 == 0)
		{
			even_Count++;
		}
		else
		{
			odd_Count++;
		}
	}
	 cout << "Even = " << even_Count << endl;
     cout << "Odd = " << odd_Count << endl;
}
