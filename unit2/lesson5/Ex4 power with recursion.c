#include <stdio.h>
int power(int num, int pow);
void main() {

	printf("Enter the base number: ");
	fflush(stdin); fflush(stdout);
	int num;
	scanf("%d", &num);
	printf("Enter power number(positive integer): ");
	fflush(stdin); fflush(stdout);
	int pow;
	scanf("%d", &pow);

	printf("%d^%d = %d", num, pow, power(num, pow));
}

int power(int num, int pow) {

	if (pow == 0) return 1;

	return num * power(num, pow - 1);
}
