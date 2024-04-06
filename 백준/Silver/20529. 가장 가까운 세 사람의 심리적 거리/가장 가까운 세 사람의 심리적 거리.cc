#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
#include <utility>
#include <vector>

using namespace std;

int dist(string a, string b){
    int num = 0;
    for(int i = 0; i < 4; i++){
        if(a[i] != b[i]){
            num++;
        }
    }
    return num;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int Test, Num;
    

    cin >> Test;
    for(int i = 0; i < Test; i++){
        cin >> Num;
        vector<string> v;
        for(int j = 0; j < Num; j++){
            string str;
            cin >> str;
            v.push_back(str);
        }
        if(Num > 32){
            cout << "0\n";
            continue;
        }

        int count = 20;
        for(int j = 0; j<Num-2; j++){
            for(int q = j+1; q<Num-1; q++){
                for(int w = q+1; w < Num; w++){
                    count = min(count, dist(v[j],v[q]) + dist(v[q],v[w]) + dist(v[j],v[w]));
                }
            }
        }
        cout << count << '\n';
    }
}