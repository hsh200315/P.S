#include <iostream>
#include <string>

using namespace std;


int main()
{	
	int count = 0;
	while (1)
	{
		int num;
		cin >> num;
		//입력 값이 0이면 종료
		if (num == 0)
			break;
		string* arr = new string[num];

		getchar();
		for (int i = 0; i < num; i++)
		{
			getline(cin, arr[i]);
		}
		int* back = new int[num+1];
		for (int i = 0; i < num; i++)
		{
			back[i] = 0;
		}
		int a;
		char b;
		for (int i = 0; i < 2 * num - 1; i++)
		{
			cin >> a >> b;
			back[a - 1]++;
		}
		int check;
		for (int i = 0; i < num; i++)
		{
			if (back[i] != 2)
				check = i;
		}


		
		count++;
		cout << count << " " << arr[check] << endl;
		delete[] arr;
		delete[] back;
	}

}