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

	int32_t A, B, C;

	cin >> A >> B >> C;
	
	int answer;
	for(int i = 0; i <= C; i++){
		answer = A/B;
		A = (A%B)*10;
	}
	cout << answer << "\n";
}