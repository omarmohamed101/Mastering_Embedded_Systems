#include <stdio.h>

void main() {
	int x;
	printf("Enter an integer you want to check: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x);

	printf("%d is %s", x, (x % 2) == 0 ? "even" : "odd");
}
