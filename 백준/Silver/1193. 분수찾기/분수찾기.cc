#include <iostream>
using namespace std;


int main() {
	int x;
	int line = 1;
	cin >> x;
	int n = 1;
	while (1) {
		if (x > n) {
			x -= n++;
			line += 1;
		}
		else {
			break;
		}
	}

	if (line % 2 == 0) {
		int numenator=1, denominator=line;
		for (int q = 1; x > q; q++) {
			numenator += 1;
			denominator -= 1;
		}
		cout << numenator << "/" << denominator;
	}
	if (line % 2 != 0) {
		int numenator = line , denominator = 1;
		for (int q = 1; x > q; q++) {
			numenator -= 1;
			denominator += 1;
		}
		cout << numenator << "/" << denominator;
	}

}