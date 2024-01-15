#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;
 
int main(){
	int test_case, num_cloth;
    
	cin >> test_case;
	string cloth_name, cloth_type;
	
	
	for(int i = 0; i < test_case; i++){
		int for_num[30];
		int variety = 0;
		vector<string> v;
		memset(for_num,0,sizeof(for_num));
		cin >> num_cloth;
		for(int j = 0; j < num_cloth; j++){
			cin >> cloth_name >> cloth_type;
			if(find(v.begin(), v.end(), cloth_type) == v.end()){
				v.push_back(cloth_type);
				variety += 1;
				for_num[find(v.begin(), v.end(), cloth_type) - v.begin()] += 1;
			}
			else{
				for_num[find(v.begin(), v.end(), cloth_type) - v.begin()] += 1;
			}
		}
		int result = 1;
		for(int j = 0; j < variety; j++){
			result *= (for_num[j] + 1);
		}
		result -= 1;
		cout << result << endl;
	}
    return 0;
}
