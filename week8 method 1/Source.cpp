
#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
int main() {
	int x;
	printf("Enter the number : ");
	scanf("%d", &x);
	int state=1;
	for (int i = 0; i <= x; i++) {
		if (state == 1) {
			state = 0;
		}
		else { state = 1; }
	}
	if (state == 1) {
		printf("odd number\n");
	}
	else printf("Even number");

	return 0;
}