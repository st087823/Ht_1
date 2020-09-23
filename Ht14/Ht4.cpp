#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int i = 0, x = 0, j = 0, x1 = 0, sum = 0;
	cin >> x;
	for (x1 = 2; x1 <= x; ++x1) {
		for (int i = 2; i <= sqrt(x1); i++) {
			if (x1 % i == 0) {
				j++;
			}
		}
		if (j == 0) {
			cout << x1 << " ";
		}
		j = 0;
	}

	cout << endl;
	return 0;
}