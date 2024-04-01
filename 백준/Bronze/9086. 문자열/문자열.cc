#include <iostream>
#include <string>

using namespace std;


int main()
{
	int num;
	cin >> num;
	string s;
	for (int i = 0; i < num; i++)
	{
		s.clear();
		cin >> s;
		if (s.length() == 1)
		{
			cout << s[0] << s[0] << endl;
		}
		else
		{
			cout << s[0] << s[s.length() - 1] << endl;
		}
	}
	

}