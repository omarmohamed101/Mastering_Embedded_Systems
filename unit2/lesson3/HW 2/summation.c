#include <stdio.h>

void main() {
	int x;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x);
	int i, res = 0;
	for (i = 1; i <= x; i++)
		res += i;


	printf("%d", res);
}
