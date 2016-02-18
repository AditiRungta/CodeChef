
/*
The Block Game
https://www.codechef.com/problems/PALL01
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
			cout << "wins" << endl;
		else
			cout << "losses" << endl;


	}
	return 0;
}