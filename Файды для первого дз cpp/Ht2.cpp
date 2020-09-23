#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a = 0, b = 0, n = 0, m = 0;
	cin >> a >> b;

	m = a - n * b;
	while (m >= b) {
		n++;
		m = a - n * b;
	}
	cout << n << endl;
	return 0;
}