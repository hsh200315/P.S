#include <iostream>
#include <cmath>
#include <list>
#include <algorithm>

using namespace std;

int main(){
	int num_iterate;
	cin >> num_iterate;
	
	if(num_iterate == 0){
		cout << num_iterate << endl;
		return 0;
	}
	
	list<int> for_list;
	int tmp;
	for(int i = 0; i < num_iterate; i++){
		cin >> tmp;
		for_list.push_back(tmp);
	}
	float for_delete = num_iterate*0.15;
	for_delete = round(for_delete);
	
	for_list.sort();
	list<int>::iterator iter = for_list.begin();
		
	for(int i = 0; i < for_delete; i++){
		for_list.pop_front();
		for_list.pop_back();
	}
	
	float sum = 0;
	
	for(iter = for_list.begin(); iter != for_list.end(); iter++){
		sum += *iter;
	}
	sum = round(sum/for_list.size());
	cout << sum << endl;
}