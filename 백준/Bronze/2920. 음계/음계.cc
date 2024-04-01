#include <iostream>
using namespace std;

bool ascending(int arr[]) {
	int tr = 0;
	for (int i = 0; i < 8; i++) {
		if (arr[i] == i + 1) {
			tr += 1;
		}
	}
	if (tr == 8) {
		return true;
	}
	else {
		return false;
	}
}
bool descending(int arr[]) {
	int tr = 0;
	for (int i = 0; i < 8; i++) {
		if (arr[i] == 8-i) {
			tr += 1;
		}
	}
	if (tr == 8) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	int arr[8];
	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
	}
	if (ascending(arr)) {
		cout << "ascending";
	}
	else if (descending(arr)) {
		cout << "descending";
	}
	else {
		cout << "mixed";
	}
}