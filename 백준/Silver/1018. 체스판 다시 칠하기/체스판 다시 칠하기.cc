#include <iostream>
#include <string>
// 백준 1018 번
using namespace std;


int main()
{
	string rightw[8];
	string rightb[8];

	for (int i = 0; i < 7; i += 2) 
	{
		rightw[i] = "WBWBWBWB";
		rightb[i] = "BWBWBWBW";
	}
	for (int i = 1; i < 8; i += 2) 
	{
		rightw[i] = "BWBWBWBW";
		rightb[i] = "WBWBWBWB";
	}
	int x, y;
	cin >> y >> x;

	string a[50];
	for (int i = 0; i < y; i++) 
	{
		cin >> a[i];
	}

	int count = 0, min = 1000;
	
	for (int i = 0; i < y - 7; i++)
	{
		for (int j = 0; j < x - 7; j++) 
		{
			for (int q = i; q < i + 8; q++)
			{
				for (int w = j; w < j + 8; w++)
				{
					if (a[q][w] != rightw[q - i][w - j])
					{

						count++;
					}
				}
			}
			
			if (count < min)
			{
				min = count;
			}

			count = 0;
			for (int q = i; q < i + 8; q++)
			{
				for (int w = j; w < j + 8; w++)
				{
					if (a[q][w] != rightb[q - i][w - j])
					{
						count++;
					}
				}
			}
			if (count < min)
			{
				min = count;
			}
			count = 0;
		}
	}
	cout << min;
}