#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>


using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	while(1){
		cin >> n >> m;
		if(n == 0 && m == 0){
			break;
		}
		if(n > m){
			cout << "Yes\n";
		}
		else{
			cout << "No\n";
		}
	}
}