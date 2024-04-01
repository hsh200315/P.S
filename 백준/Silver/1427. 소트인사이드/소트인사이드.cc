#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int arr[10] = {};
	for (int i = 0;i<s.length(); i++) {
		arr[s[i] - 48] += 1;
	}
	for (int i = 9; i >= 0; i--) {
		for (int j = 0; j < arr[i]; j++) {
			cout << i;
		}
	}
}