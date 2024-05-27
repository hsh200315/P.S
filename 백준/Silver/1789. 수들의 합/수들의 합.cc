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

	long S;
	long tmp = 1;
	long count = 0;
	cin >> S;

	while(1){
		if(S-tmp >= tmp+1){
			S = S - tmp;
			tmp++;
			count++;
			//cout << S << " " << count << "\n";
		}
		else{
			count += 1;
			break;
		}
	}
	cout << count << "\n";
}