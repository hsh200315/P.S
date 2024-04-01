#include <iostream>
using namespace std;

int main() {
	int arr[100][100] = { 0 };
	int times,a,b;
	int square = 0;
	cin >> times;
	for (int i = 0; i < times; i++) {
		cin >> a >> b;
		for (int j = a - 1; j < a + 9; j++) {
			for (int k = b - 1; k < b + 9; k++) {
				if (arr[j][k] == 0) {
					arr[j][k] = 1;
				}
			}
		}
	}
	for (int c = 0; c < 100; c++) {
		for (int d = 0; d < 100; d++) {
			if (arr[c][d] == 1) {
				square += 1;
			}
		}
	}
	cout << square;
}