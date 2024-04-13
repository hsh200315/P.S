#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

   string str;
   int age, weight;
   
   vector<string> v1;
   vector<int> v2;
   while(1){
        cin >> str >> age >> weight;
        if(str=="#" && age == 0 && weight == 0){
            break;
        }
        v1.push_back(str);
        if(age > 17 || weight >= 80){
            v2.push_back(1);
        }
        else{
            v2.push_back(0);
        }
   }

   for(int i = 0; i < v1.size(); i++){
        if(v2[i] == 0){
            cout << v1[i] << " Junior\n";
        }
        else{
            cout << v1[i] << " Senior\n";
        }
    }
        
}