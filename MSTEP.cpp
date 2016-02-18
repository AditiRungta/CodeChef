
/*
Count Steps in Matrix
https://www.codechef.com/problems/MSTEP
*/

#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		int *mat;
		mat = new int[n*n];
		int *arr;
		arr = new int[n*n];
		int x;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				cin >>x;
				mat[(i*n) + j] = x;
				arr[x - 1] = (i*n) + j;
			}
		}
		int count = 0;
		for (int k = 1; k < (n*n); k++)
		{
			count += abs((arr[k - 1] / n) - (arr[k] / n)) + abs((arr[k - 1] % n) - (arr[k] % n));
		}
		cout << count << endl;
	}
	return 0;
}