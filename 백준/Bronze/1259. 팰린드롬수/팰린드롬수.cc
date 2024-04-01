#include <iostream>
#include <string>
using namespace std;


int main() {
	int a = 1;
	string num;
	while (1) {
		cin >> a;
		if (a == 0) {
			break;
		}
		num = to_string(a);
		int tr = 0;
		int b = num.length();
		if (b % 2 == 0) {
			for (int i = 0; i < b / 2; i++) {
				if (num[i] != num[b - 1 - i]) {
					tr = 1;
				}
			}
		}
		if (b % 2 != 0) {
			for (int i = 0; i < b / 2 ; i++) {
				if (num[i] != num[b - 1 - i]) {
					tr = 1;
				}
			}
		}
		if (tr == 1) {
			cout << "no\n";
		}
		else if (tr == 0) {
			cout << "yes\n";
		}
	}
}