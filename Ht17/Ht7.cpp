#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int i = 0, x = 0, n = 0;
	cin >> x >> n;
	int x1 = x;
	for (i = 0; i < (n - 1); i++) {
		x = x * x1;
	}

	cout << x << endl;
	return 0;
}