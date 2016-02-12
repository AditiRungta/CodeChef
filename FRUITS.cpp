
/*
Chef & Fruits
https://www.codechef.com/problems/FRUITS
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
		int n, m, k;
		cin >> n >> m >> k;
		int diff;
		diff = abs(n - m);
		while ((k--)&&(diff))
		{
			diff--;
			if (!diff)
				break;
		}
		cout << diff << endl;
	}
	return 0;
}