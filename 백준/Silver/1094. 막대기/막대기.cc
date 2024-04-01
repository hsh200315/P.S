#include <iostream>
using namespace std;

int main() {
	int X;
	cin >> X;
	int sum = 0;
	int count = 0;
	int stick = 64;
	while (sum != X && stick>0) {
		if (stick == X-sum) {
			sum += stick;
			count += 1;
		}
		else if (stick < X - sum) {
			sum += stick;
			count += 1;
			stick /= 2;
		}
		else if (stick > X - sum) {
			stick /= 2;
			continue;
		}
	}
	cout << count;
}