#include <stdio.h>

void main() {
	float x, y;
	printf("Enter two numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f%f", &x, &y);
	printf("Sum %f", x * y);
}
