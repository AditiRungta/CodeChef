
/*
Ciel & Receipt
https://www.codechef.com/problems/CIELRCPT
*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int p;
		cin >> p;
		int i, menu = 0;
		while (p > 0)
		{
			i = 12;
			while (exp2( i - 1) > p)
				i--;
			p -= exp2( i - 1);
			menu++;
		}
		cout << menu << endl;
	}
	return 0;
}