#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main() {
	int a[3]={1};
	while(1) {
		cin >> a[0] >> a[1] >> a[2];
		if (a[0] == 0 && a[1] == 0 && a[2] == 0) {
			break;
		}
		sort(a, a + 3);
		if (pow(a[2], 2) == pow(a[1], 2) + pow(a[0], 2)) {
			cout << "right" << endl;
		}
		else {
			cout << "wrong" << endl;
		}
	}
}