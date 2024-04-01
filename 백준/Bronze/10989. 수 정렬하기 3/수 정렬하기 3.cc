#include <stdio.h>
using namespace std;

int main() {
	int times;
	scanf("%d",&times);
	int a;
	int arr[10001] = {0,};
	for (int i = 0; i < times; i++) {
		scanf("%d", &a);
		arr[a]++;
	}
	for (int i = 0; i <= 10000; i++) {
		for (int j = 0; j < arr[i]; j++) {
			printf("%d\n", i);
		}
	}
}