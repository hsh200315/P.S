#include <iostream>
using namespace std;

int main() {
	int hour, min;
	cin >> hour >> min;
	int p;
	cin >> p;
	int phour, pmin;
	phour = p / 60;
	pmin = p % 60;
	hour += phour;
	min += pmin;
	while (min >= 60) {
		min -= 60;
		hour += 1;
	}
	while (hour >= 24) {
		hour -= 24;
	}
	cout << hour << ' ' << min;
}