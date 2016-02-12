
/*
Snape & Ladder
https://www.codechef.com/problems/SNAPE
*/

#include<iostream>


using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		double b, ls, rs1, rs2;
		cin >> b >> ls;
		rs1 = sqrt((ls*ls) - (b*b));
		rs2 = sqrt((ls*ls) + (b*b));
		cout << rs1 << " " << rs2 << endl;
	}
	return 0;
}