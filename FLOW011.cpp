
/*
Gross Salary
https://www.codechef.com/problems/FLOW011
*/

#include<iostream>


using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		double salary;
		cin >> salary;
		double hra, da, gross;
		if (salary < 1500)
		{
			hra = 0.1*salary;
			da = 0.9*salary;
			
		}
		else
		{
			hra = 500;
			da = 0.98*salary;
		}
		gross = salary + hra + da;
		cout << gross << endl;
		


	}

	return 0;
}