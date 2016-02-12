
/*
Chef & Dolls
https://www.codechef.com/problems/MISSP
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int *doll;
		doll = new int[n];
		for (int i = 0; i < n; i++)
			cin >> doll[i];
		int j;
		for (int k = 0; k < n; k++)
		{
			if (doll[k] >= 0)
			{
				j = k + 1;
				do
				{
					if (doll[k] == doll[j])
					{
						doll[k] = -1;
						doll[j] = -1;
						break;
					}
					j++;
				} while (j < n);
			}
		}
		for (int m = 0; m < n; m++)
		{
			if (doll[m] >= 0)
			{
				cout << doll[m] << endl;
			}
		}


	}

	return 0;
}