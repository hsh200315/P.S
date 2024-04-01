#include <iostream>
#include <string>

using namespace std;


int main()
{
	string a;
	cin >> a;
	int num[10] = {0,};
	int len = a.length();
	for (int i = 0; i < len; i++)
	{
		num[a[i] - '0'] ++;
	}
	int max = 0,check = 0;
	for (int i = 0; i < 10; i++)
	{
		if (max < num[i] && (i != 6 && i!= 9))
		{
			max = num[i];
		}
	}
	

	if (max < (num[6] + num[9] + 1) /2) {
		cout << (num[6] + num[9] + 1) / 2;
	}
	else
		cout << max;
}