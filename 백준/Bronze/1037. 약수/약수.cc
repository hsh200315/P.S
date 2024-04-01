#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int num;
	cin >> num;
	int q;
	vector<int> a;
	for (int i = 0; i < num; i++)
	{
		cin >> q;
		a.push_back(q);
	}
	sort(a.begin(), a.end());
	int ans;
	ans = a[0] * a[num - 1];
	cout << ans;
}