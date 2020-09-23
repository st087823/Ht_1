#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int i = 0, x = 0, j = 0, k = 0, sum = 1, j1 = 0;
	cin >> x;


	for (int i = 2; pow(i,2) <= x; i++) {
		if (x % i == 0) {
			while (x % i == 0) {
				x /= i; j++;
			}
			if (j != 0) {
				cout << "\n" << i << " Number of elements: " << j << endl;
				sum = sum*(j+1);
			}
		}
		j = 0;
	}

	if (x != 1)
	{
		j1++;
		cout << x << " Number of elements: " << j1 << endl;
	}
	sum = (j1 + 1) * sum;
	cout << "\n" << "Number of divisors = " << sum << endl;
	return 0;
}