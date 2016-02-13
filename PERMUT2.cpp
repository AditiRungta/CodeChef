
/*
Ambiguous Permutations
https://www.codechef.com/problems/PERMUT2
*/

#include<iostream>

using namespace std;

int main()
{
	
	while (1)
	{
		int n;
		cin >> n;
		if (n == 0)
			break;
		int *perm;
		perm = new int[n];
		for (int i = 0; i < n; i++)
			cin >> perm[i];
		int k = 0;
		while (perm[(perm[k] - 1)] == (k + 1))
		{
			k++;
			if (k == n)
				break;
		}
		if (k == n)
			cout << "ambiguous" << endl;
		else
			cout << "not ambiguous" << endl;

	}
	return 0;
}