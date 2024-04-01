#include <iostream>
#include <string>;
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	else {
		return a.length() < b.length();
	}
}

int main() {
	int times;
	cin >> times;
	string s[20000];
	for (int i = 0; i < times; i++) {
		cin >> s[i];
	}
	sort(s, s + times, compare);

	for (int i = 0; i < times; i++) {
		if (s[i] == s[i - 1]) {
			continue;
		}
		else {
			cout << s[i] << "\n";
		}
	}
}