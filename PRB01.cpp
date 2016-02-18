
/*
Primality Test
https://www.codechef.com/problems/PRB01
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
		int flag = 0;
		for (int i = 2; i < (n / 2); i++)
		{
			if (!(n%i))
			{
				flag = 1;
				break;
			}
		}
		if (flag)
			cout << "no" << endl;
		else
			cout << "yes" << endl;

	}
	return 0;
}