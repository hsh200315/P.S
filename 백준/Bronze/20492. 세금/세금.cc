#include <iostream>

using namespace std;


int main()
{
	long long int N;
	cin >> N;
	long long int a, b;
	a = N * 0.78;
	b = N * 0.8 + N * 0.2 * 0.78;
	cout << a << " " << b;
}