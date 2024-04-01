#include <iostream>

using namespace std;

int main(){
	int origin,divide,first,second,third;
	cin >> origin;
	cin >> divide;
	int a,b,c;
	a = divide %10;
	b = divide %100/10;
	c = divide/100;
	first = origin*a;
	cout << first << endl;
	second = origin*b;
	cout << second << endl;
	third = origin*c;
	cout << third << endl;
	int mok;
	mok = first + second*10+third *100;
	cout << mok << endl;
}