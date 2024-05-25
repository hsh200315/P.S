#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int E,S,M;

	cin >> E >> S >> M;
	int i1, i2, i3;
	int year = 1;
	while(1){
		i1 = year%15;
		if(i1 == 0){
			i1 = 15;
		}
		i2 = year % 28;
		if(i2 == 0){
			i2 = 28;
		}
		i3 = year % 19;
		if(i3 == 0){
			i3 = 19;
		}
		if(i1 == E && i2 == S && i3 == M){
			break;
		}
		year++;
	}
	cout << year << "\n";
}