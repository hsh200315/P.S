#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int arr[5];
	for (int a = 0; a < 5; a++) {
		cin >> arr[a];
	}
	for (int i = 1; i < 5; i++) {
		int tmp = arr[i];
		int j = i - 1;
		while (j >= 0 && tmp < arr[j]) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j+1] = tmp;
	}

	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	cout << sum / 5 << "\n";
	cout << arr[2];
}