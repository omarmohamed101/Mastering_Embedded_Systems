#include <stdio.h>

void main() {
	float a, b;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a);

	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &b);


	a += b;
	b = a - b;
	a -= b;
	printf("After swapping, value of a = %f\n",a);
	printf("After swapping, value of b = %f",b);
}
