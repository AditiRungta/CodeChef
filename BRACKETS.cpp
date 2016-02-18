
/*
Brackets
https://www.codechef.com/problems/BRACKETS
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
		string bracket;
		cin >> bracket;
		int balance = 0;
		int max_balance = 0;
		for (int i = 0; i<bracket.length(); i++)
		{
			if (bracket[i] == '(')
				balance++;
			if (bracket[i] == ')')
				balance--;
			if (balance > max_balance)
				max_balance = balance;
		}
		for (int j = 0; j < max_balance; j++)
			cout << "(";
		for (int k = 0; k < max_balance; k++)
			cout << ")";
		cout << endl;
		
	}
	return 0;
}