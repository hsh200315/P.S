#include <iostream>
using namespace std;
#define Max 10000

int main() {
	int a;
	bool* primeNum = new bool[Max +1];
	for (int i = 2; i <= Max; i++) {
		primeNum[i] = true;
	}
	primeNum[1] = false;
	for (int e = 2; e * e <= Max; e++) {
		if (primeNum[e] == false) {
			continue;
		}
		for (int q = e * e; q <= Max; q += e) {
			primeNum[q] = false;
		}
	}
	cin >> a;
	int input;
	int gap;
	
	for (int i = 0; i < a;i++) {
		cin >> input;
		int savemin=0 , savemax = 0, savegap = 10000;
		for (int j = 2; j <= input / 2; j++) {
			if (primeNum[j] == 1 && primeNum[input - j] == 1 ) {
				gap = input - 2 * j;
				if (gap < savegap) {
					savemin = j;
					savemax = input - j;
				}
			}
			
		}
		cout << savemin << " " << savemax << "\n";
	}
}
	