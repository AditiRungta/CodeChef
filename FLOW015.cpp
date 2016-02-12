
/*
Gregorian Calendar
https://www.codechef.com/problems/FLOW015
*/

#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int t, y;
	cin >> t;
	char a[7][10] = {"sunday", "monday","tuesday","wednesday","thursday","friday","saturday" };
	for (int i = 1; i <= t; i++)
	{
		cin >> y;
		int day;
		y = y - 1;
		day = (y + (y / 4) - (y / 100) + (y / 400) + 1) % 7;
		cout << a[day] << endl;
	}
	return 0;
}