#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int i = 0, n = 0, x = 0;
	cin >> n;
	x = 2 <<(n - 1);
	x = (~x) * (-1) - 2;
	cout << x << endl;
	return 0;
}