#include <stdio.h>

void main() {
	int x;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x);
	if (x < 0) {
		printf("Error!! Factorial of a negative number doesn't exist");
		return;
	}
	int i, res = 1;
	for (i = 1; i <= x; i++)
		res *= i;
	printf("%d", res);
}
