#include <iostream>
using namespace std;

int main() {
	int chess[6];
	for (int i = 0; i < 6; i++) {
		cin >> chess[i];
	}
	int t[6] = { 1,1,2,2,2,8 };
	for (int j = 0; j < 6; j++) {
		cout << t[j] - chess[j] << ' ';
	}
}