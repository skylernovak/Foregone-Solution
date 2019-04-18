#include <iostream>
using namespace std;

bool containsFour(int);

int main() {
	int t = 0; // number of test cases
	int n = 0; // number to solve per test case
	int a = 0; // first number of solution
	int b = 0; // second number of solution

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;

		for (int i = 1; i < n / 2; i++) {
			a = n - i;
			b = n - a;
			
			if (a + b != n) break;
			if (!containsFour(a) && !containsFour(b)) break;
		}

		cout << "Case #" << i + 1 << ": " << a << " " << b << endl;
	}

}

bool containsFour(int num) {
	// RETURNS FALSE IF NO 4
	// RETURNS TRUE IF THERE IS A 4

	while (num > 0) {
		if ((num % 10) == 4) break;
		num /= 10;
	}

	if (num == 0) return false;

	return true;
}