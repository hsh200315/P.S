#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int arr[101] = {0};
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	int dif = 300000;
	int d;
	int sum = 0;
	int finalsum;
	for (int i = 0; i < N - 2; i++) {
		sum += arr[i];
		for (int j = i + 1; j < N - 1; j++) {
			sum += arr[j];
			for (int q = j + 1; q < N; q++) {
				sum += arr[q];
				d = M - sum;
				if (d < 0) {
					sum -= arr[q];
				}
				else if (d == 0) {
					cout << sum << "\n";
					return 0;
				}
				else if (dif > d) {
					dif = d;
					finalsum = sum;
					sum -= arr[q];
				}
				else {
					sum -= arr[q];
				}
			}
			sum -= arr[j];
		}
		sum -= arr[i];
	}
	cout << finalsum << "\n";
}