#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int i = 0, n = 0, x = 0, x1 = 0;
	cin >> n;
	x1 = ~x;
	x = 2 << (n - 1);
	cout << x+x1 << endl;
	return 0;
}