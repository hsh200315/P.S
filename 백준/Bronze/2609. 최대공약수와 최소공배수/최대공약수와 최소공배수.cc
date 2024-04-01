#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int mina(int a,int b) {
	int c, d;
	if (a >= b) {
		c = a;
		d = b;
	}
	else {
		c = b;
		d = a;
	}
	int min = c;
	while (1) {
		if (min % a == 0 && min % b == 0) {
			break;
		}
		else {
			min += 1;
		}
	}
	return min;
}

int main() {
	int a, b;
	cin >> a >> b;
	int c,d;
	if (a >= b) {
		c = a;
		d = b;
	}
	else {
		c = b;
		d = a;
	}
	// c가 더 큰 수, d는 작은 수
	int max = 0;
	for (int i = 1; i <= d; i++) {
		if (a % i == 0 && b % i == 0 && max<i) {
			max = i;
		}	
	}
	int min;
	min = mina(a, b);
	cout << max << endl << min;
}