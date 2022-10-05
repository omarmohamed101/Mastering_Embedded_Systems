#include <stdio.h>

void primes (int l, int h);

void main() {

	printf("Enter two numbers(intervals): ");
	fflush(stdin); fflush(stdout);
	int num1, num2;
	scanf("%d%d", &num1, &num2);

	fflush(stdin); fflush(stdout);
	printf("prime numbers between %d and %d are: ", num1, num2);
	fflush(stdin); fflush(stdout);
	primes(num1, num2);
}

void primes (int l, int h) {
	int i, j, flag;
	for (i = l + 1; i < h; i++) {
		flag = 0;
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				flag = 1;
				break;
			}
		}

		if (!flag) printf("%d ", i);
	}

}
