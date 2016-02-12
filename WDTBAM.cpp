
/*
Who dares to be a millionaire
https://www.codechef.com/problems/WDTBAM
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
		string ans;
		cin >> ans;
		string chefans;
		cin >> chefans;
		int *w;
		w = new int[n + 1];
		for (int i = 0; i <= n; i++)
			cin >> w[i];

		int correct = 0;
		for (int j = 0; j < n; j++)
		{
			if (ans[j] == chefans[j])
				correct++;
		}
		if (correct == n)
			cout << w[n] << endl;
		else
		{
			int max = w[0];
			for (int k = 0; k <= correct; k++)
				if (max < w[k])
					max = w[k];
			cout << max << endl;
		}

	}
	return 0;
}