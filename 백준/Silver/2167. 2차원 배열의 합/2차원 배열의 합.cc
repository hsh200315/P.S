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

	int N, M, K;
	int i = 0, j = 0, x = 0, y = 0;
	int arr[300][300];
	int count =0;

	cin >> N >> M;
	for(int r = 0; r < N; r++){
		for(int t = 0; t < M; t++){
			cin >> arr[r][t];
		}
	}

	cin >> K;
	for(int r = 0; r < K; r++){
		count = 0;
		cin >> i;
		cin >> j;
		cin >> x;
		cin >> y;
		for(int q = i-1; q < x; q++){
			for(int w = j-1; w < y; w++){
				count += arr[q][w];
			}
		}
		cout << count << "\n";
	}
}