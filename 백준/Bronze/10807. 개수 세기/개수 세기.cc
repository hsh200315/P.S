#include <iostream>
using namespace std;

int main() {
	int N,v;
	int arr[100];
	int count = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	cin >> v;
	for (int j = 0; j < N; j++) {
		if (v == arr[j]) {
			count += 1;
		}
	}
	cout << count;
}