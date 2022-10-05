#include <stdio.h>

int fact(int x);

void main() {

	printf("Enter a positive integer: ");
	fflush(stdin); fflush(stdout);
	int num;
	scanf("%d", &num);
	printf("Factorial of %d = %d", num, fact(num));



}

int fact(int x) {
	if (x == 1) return 1;
	return x * fact(x - 1);
}
