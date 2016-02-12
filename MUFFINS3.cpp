
/*
Packaging Cupcakes
https://www.codechef.com/problems/MUFFINS3
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
		int n;
		cin >> n;
		int left = 0,psize;
		psize = n / 2 + 1;
		left = n - psize;
		cout << psize << endl;
	}
	return 0;
}