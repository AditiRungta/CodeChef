
/*
Sum of Digits
https://www.codechef.com/problems/FLOW006
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
		int tmp;
		tmp = n;
		int digit, sum=0;
		
		while (tmp)
		{
			digit = tmp % 10;
			tmp = tmp / 10;
			sum += digit;
		}
		
		cout << sum << endl;

	}
	return 0;
}