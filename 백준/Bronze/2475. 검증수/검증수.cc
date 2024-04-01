#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	int sum = 0;
	for (int j = 0; j < 5; j++) {
		sum += pow(arr[j], 2);
	}
	int a;
	a = sum % 10;
	cout << a;
}