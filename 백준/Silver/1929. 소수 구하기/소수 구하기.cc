#include <iostream>
using namespace std;


int main() {
	int a, b;
	cin >> a >> b;
	bool* primeNum = new bool[1000001];
	for (int i = 2; i <= b; i++) {
		primeNum[i] = true;
	}
	primeNum[1] = false;
	for (int e = 2; e*e<=b; e++) {
		if (primeNum[e] == false) {
			continue;
		}
		for (int q = e * e; q <= b; q += e) {
			primeNum[q] = false;
		}
	}
	for (int w = a; w <= b; w++) {
		if (primeNum[w] == true) {
			cout << w << "\n";
		}
	}	
}