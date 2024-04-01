#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int num;
	cin >> num;
	string str;
	stack<char> s;
	int check = 1;
	for (int i = 0; i < num; i++) {
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			if (str[j] == '(') {
				s.push('(');
			}
			else if (str[j] == ')') {
				if (s.size() == 0) {
					cout << "NO\n";
					check = 0;
					break;
				}
				s.pop();
			}
		}
		if (s.size() == 0 && check == 1) {
			cout << "YES\n";
		}
		else if(check == 1) {
			cout << "NO\n";
		}
		check = 1;
		str.clear();
		while (s.size() != 0) {
			s.pop();
		}
	}
}