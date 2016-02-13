
/*
Cooking Machine
https://www.codechef.com/problems/COOKMACH
*/

#include<iostream>
#include<cmath>

using namespace std;

int maxbit(int v) {
	v |= v >> 1;
	v |= v >> 2;
	v |= v >> 4;
	v |= v >> 8;
	v |= v >> 16;
	return v ^ (v >> 1);
}

int bitcount(int v) {
	v = (v & 0x55555555) + ((v >> 1) & 0x55555555);
	v = (v & 0x33333333) + ((v >> 2) & 0x33333333);
	v = (v & 0x0f0f0f0f) + ((v >> 4) & 0x0f0f0f0f);
	v = (v & 0x00ff00ff) + ((v >> 8) & 0x00ff00ff);
	v = (v & 0x0000ffff) + ((v >> 16) & 0x0000ffff);
	return v;
}

int extractsecond(int v) {
	v ^= maxbit(v);
	if (v == 0) {
		// v was originally a power of two
		return 0;
	}
	else {
		return bitcount(maxbit(v) - 1) + 1;
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		int steps = 0;
		steps = extractsecond(a);
		a >>= steps;
		steps += abs(bitcount(a - 1) - bitcount(b - 1));
		cout << steps << endl;
	}
}