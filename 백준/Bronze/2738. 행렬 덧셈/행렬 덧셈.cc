#include <iostream>
using namespace std;

int main() {
	int arr1[100][100];
	int arr2[100][100];
	int arr3[100][100];
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> arr1[i][j];
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> arr2[i][j];
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << arr3[i][j] << ' ';
		}
		cout << endl;
	}
}