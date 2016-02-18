
/*
Good Joke!
https://www.codechef.com/problems/RRJOKE
*/

#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		int *x, *y;
		x = new int[n];
		y = new int[5];
		
		int xor = 0;
		for (int i = 1; i <= n; i++)
			xor = xor^i;
		cout << xor << endl;

		for (int i = 0; i < n; i++)
			cin >> x[i] >> y[i];

	}
	return 0;
}