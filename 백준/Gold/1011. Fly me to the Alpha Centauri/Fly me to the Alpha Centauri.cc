#include <iostream>
#include <stdio.h>
using namespace std;


int main() {
	int times;
	scanf("%d", &times);
	long long x, y, d;
	long long count = 0;
	for (int i = 0; i < times; i++) {
		scanf("%d %d", &x, &y);
		d = y - x;
	// d는 남은 거리
		count = 0;
		if (d == 1) {
			printf("%d\n",1);
			continue ;
		}
		d -= 2;
		count += 2;
		//시작과 끝은 항상 1
		long int sum = 0,speed = 1;
		while (1) {
			if (d == 0) {
				break;
			}
			if (d == 2) {
				count += 1;
				d -= 2;
				continue;
			}
			sum = speed*(speed + 1) / 2;
			if (d >= sum + speed) {
				speed += 1;
				d -= speed;
				count += 1;
				continue;
			}
			else if (d >= sum-1) {
				d -= speed;
				count += 1;
			}
			else {
				speed -= 1;
				d -= speed;
				count += 1;
				continue;
			}
		}
		printf("%d\n", count);
	}
}