#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x = 0; int s = 0;
	cin >> x;
	s = 1 + x + pow(x, 2) + x * pow(x, 2) + x * pow(x, 3);
	cout << s << endl;
	return 0;
}