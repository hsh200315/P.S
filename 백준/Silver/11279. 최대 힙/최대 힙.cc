#include <iostream>
#include <queue>

using namespace std;
 
int TC;
priority_queue<int> numbers;

int main(){	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> TC;
	
	for(int i = 0; i < TC; i++){
		int tmp;
		cin >> tmp;
		if(tmp == 0){
			if(numbers.empty()){
				cout << 0 << "\n";
			}
			else{
				cout << numbers.top() << "\n";
				numbers.pop();
			}
		}
		else{
			numbers.push(tmp);
		}
	}
	return 0;
}
