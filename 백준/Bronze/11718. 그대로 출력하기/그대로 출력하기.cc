#include <iostream>
#include <string>

using namespace std;


int main()
{

	string s;
	for (int i = 0; i < 100; i++)
	{
		s.clear();
		getline(cin,s);
		cout << s << endl;
	}
	

}