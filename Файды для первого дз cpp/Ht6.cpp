#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int i = 0, x = 0, x1 = 1;
	cin >> x;
	for (i = 1; i <= x; i++) {
		x1 = x1 * i;
	}

	cout << x1 << endl;
	return 0;
}