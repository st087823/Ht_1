#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x = 0; int s = 0, x1 = 0;
	cin >> x;
	x1 = x * x;
	s = 1 + (x1 + 1) * (x1 + x);
	cout << s << endl;
	return 0;
}