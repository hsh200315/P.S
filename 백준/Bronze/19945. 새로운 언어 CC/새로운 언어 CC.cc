#include <iostream>
#include <stack>
using namespace std;

int main() {
	int input;
	cin >> input;
	if (input < 0) {
		cout << "32";
		return 0;
	}
	stack<int> s;
	if (input == 0) {
		cout << "1";
		return 0;
	}
	while (input != 0) {
		if (input % 2 == 1 ) {
			s.push(0);
		}
		else if(input % 2 == 0) {
			s.push(1);
		}
		input /= 2;
	}
	cout << s.size();
}