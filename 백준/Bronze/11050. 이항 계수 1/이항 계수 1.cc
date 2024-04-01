#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int up, down;
	cin >> up >> down;
	int x = 1, y = 1,ans=0;
	for (int i = 0; i < down; i++) {
		x *= (up - i);
		y *= (i + 1);
	}
	ans = x / y;
	cout << ans;
}