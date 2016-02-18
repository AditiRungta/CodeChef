
/*
Grade The Steel
https://www.codechef.com/problems/FLOW014
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
		double h, c, t;
		cin >> h >> c >> t;
		int flag1, flag2, flag3;

		flag1 = flag2 = flag3 = 0;

		if (h > 50)flag1 = 1;
		if (c < 0.7)flag2 = 1;
		if (t > 5600)flag3 = 1;

		if (flag1&&flag2&&flag3)
			cout << "10" << endl;
		else if (flag1&&flag2)
			cout << "9" << endl;
		else if (flag2&&flag3)
			cout << "8" << endl;
		else if (flag1&&flag3)
			cout << "7" << endl;
		else if (flag1 || flag2 || flag3)
			cout << "6" << endl;
		else
			cout << "5" << endl;

	}
	return 0;
}