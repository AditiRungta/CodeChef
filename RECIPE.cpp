
/*
Cutting Recipe
https://www.codechef.com/problems/RECIPE
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
		int *ing;
		ing = new int[n];
		for (int i = 0; i < n; i++)
			cin >> ing[i];
		int max = ing[0];
		for (int j = 0; j < n; j++)
			if (max < ing[j])
				max = ing[j];
		for (int k = max; k > 0; k--)
		{
			int l = 0;
			while ((ing[l] % k == 0) && (l < n))
				l++;
			if (l == n)
			{
				for (int p = 0; p < n; p++)
					cout << ing[p] / k << " ";
				cout << endl;
				break;
			}

		}
		
	}
	return 0;
}