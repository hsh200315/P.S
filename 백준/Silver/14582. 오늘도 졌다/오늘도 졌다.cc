#include <iostream>
using namespace std;

int main() {
	int woollim[9];
	int startlink[9];

	for (int i = 0; i < 9; i++) {
		cin >> woollim[i];
	}
	for (int i = 0; i < 9; i++) {
		cin >> startlink[i];
	}
	int check = 0;
	int w = 0, s = 0;
	for (int i = 0; i < 9; i++) {
		w += woollim[i];
		if (w > s) {
			check = 1;
		}
		s += startlink[i];
		
	}
	if (check == 1) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}