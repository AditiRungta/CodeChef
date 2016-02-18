
/*
Devu & Grapes
https://www.codechef.com/problems/DEVUGRAP
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
		int n, k;
		cin >> n >> k;
		int *basket;
		basket = new int[n];
		int i, grapes = 0;
		for (i = 0; i < n; i++)
			cin >> basket[i];
		int d;
		for (i = 0; i < n; i++)
		{
			d = basket[i] % k;
			if (basket[i] >= k)
				grapes += (d < (k - d) ? d : k - d);
			else
				grapes += (k - d);
		}
		cout << grapes << endl;
	}
	return 0;
}