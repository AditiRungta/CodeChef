
/*
ATM
https://www.codechef.com/problems/HS08TEST
*/

#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
	double  ibal, fbal, charge, amt;
	cin >> amt >> ibal;
	charge = 0.50;
	
	fbal = ibal;
	if (amt == floor(amt))
	{
		if (ibal >= (amt + charge) && ((int)amt % 5 == 0))
			fbal = ibal - amt - charge;
	}
		cout.precision(2);
		cout << fixed << fbal << endl;
	
	return 0;
}