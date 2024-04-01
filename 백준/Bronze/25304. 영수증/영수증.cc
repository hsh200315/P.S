#include <iostream>
using namespace std;

int main() {
	long int sum,sum2;
	int N, a, b;
	cin >> sum;
	cin >> N;
	sum2 = 0;
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		sum2 += a * b;
	}
	if (sum == sum2) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}