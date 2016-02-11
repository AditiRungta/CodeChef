
/*
Count Subarrays
https://www.codechef.com/problems/SUBINC
*/

#include<iostream>
#include<cstdio>

using namespace std;
int main()
{
	long long t, k;
	cin >> t;
	for (int k = 1; k <= t; k++)
	{
		int n;
		long long *a;
		cin >> n;
		a = new long long[n];
		int i;
		for (i = 0; i < n; i++)
			cin >> a[i];
		long long count=0;
		int j;
		i = 0;
		while (i < n)
		{
			//cout << a[i]<<"\t";
			count++;
			j = i+1;
			while ((a[j-1] <= a[j])&&(j<n))
			{
				//cout << a[j] << "\t";
				count++;
				j++;
			}
			i++;
			//cout << endl;
		}
		cout << count << endl;
		
	}
	
	return 0;
}