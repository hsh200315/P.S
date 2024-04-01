#include <iostream>

using namespace std;


int main()
{
	int arr[6];
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}
	int sum = 0;
	for (int i = 0; i < 6; i++)
	{
		sum += arr[i] * 5;
	}
	cout << sum;
}