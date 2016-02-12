
/*
The Lead Game
https://www.codechef.com/problems/TLG
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int cs=0, ct=0;
	int i = 0;
	int *lead;
	lead = new int[n];
	int *win;
	win = new int[n];
	int k = n;
	while (k--)
	{
		
		int s, t;
		cin >> s >> t;
		cs += s;
		ct += t;
		if (cs > ct)
		{
			lead[i] = cs - ct;
			win[i] = 1;
			cout << win[i] << " " << lead[i] << endl;
			i++;
		}
		else
		{
			lead[i] = ct - cs;
			win[i] = 2;
			cout << win[i] << " " << lead[i] << endl;
			i++;
		}

		
		
	}
	int max = lead[0];
	int winner = win[0];
	for (int j = 0; j < n; j++)
	{
		if (max < lead[j])
		{
			max = lead[j];
			winner = win[j];
		}
	}

	cout << winner << " " << max << endl;
	
	return 0;
}