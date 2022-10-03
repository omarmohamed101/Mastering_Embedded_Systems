#include <stdio.h>

void main() {
	float a, b, c;
	printf("Enter three numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f%f%f", &a, &b, &c);

	if (a > b && a > c)
		printf("%.2f", a);
	else if (b > a && b > c)
		printf("%.2f", b);
	else
		printf("%.2f", c);
}
