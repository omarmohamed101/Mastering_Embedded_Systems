#include <stdio.h>

void main() {
	int x;

	printf("enter a num: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &x);
	printf("you entered %d", x);
}
