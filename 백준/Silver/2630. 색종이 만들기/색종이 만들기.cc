#include <iostream>

using namespace std;

int paper[128][128];
int white = 0, blue = 0;

void solve(int x, int y, int size){
	int check = 0;
	int standard = paper[y][x];
	for(int i = y; i < y + size; i++){
		for(int j = x; j < x + size; j++){
			if(standard != paper[i][j]){
				check = 1;
				break;
			}
		}
	}
	if(check == 1){
		solve(x,y,size/2);
		solve(x+size/2,y,size/2);
		solve(x,y+size/2,size/2);
		solve(x+size/2,y+size/2,size/2);
	}
	else{
		if(standard == 0){
			white++;
		}
		else{
			blue++;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int size = 0;
	cin >> size;
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			cin >> paper[i][j];
		}
	}

	solve(0,0,size);

	cout << white << "\n";
	cout << blue << "\n";
}