#include <iostream>
#include <string>
using namespace std;


int main() {
	int a,num,b;
	int arr[10];
	int min = 1000000;
	cin >> a;
	for (int i = a - 1; i > 0; i--) {
		b = i;
		num = i;
		while (1) {
			if (b / 10 == 0) {
				num += b;
				break;
			}
			num += b % 10;
			b /= 10;	
		}
		if (num == a) {
			min = i;
		}
	}
	if (min == 1000000) {
		cout << 0;
	}
	else {
		cout << min;
	}
}