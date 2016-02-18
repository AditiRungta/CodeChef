
/*
Sum of palindromic numbers
https://www.codechef.com/problems/SPALNUM
*/

#include<iostream>


using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int l, r;
		cin >> l >> r;
		int sum = 0;
		for (int n = l; n <= r; n++)
		{

			int tmp;
			tmp = n;
			int digit, rev = 0;
			while (tmp)
			{
				digit = tmp % 10;
				tmp = tmp / 10;
				rev = rev * 10 + digit;
			}
			if (n == rev)
				sum += n;
			
		}
		cout << sum << endl;

	}
	return 0;
}