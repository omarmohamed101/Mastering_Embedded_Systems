#include <stdio.h>
#include <stdlib.h>

struct SComplex add(struct SComplex c1, struct SComplex c2);

struct SComplex {
	float real;
	float imaginary;
};

void main() {

	struct SComplex c1, c2, res;

	printf("Enter 1st complex number: \n");
	printf("Enter real: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &c1.real);
	printf("Enter Imaginary: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &c1.imaginary);

	printf("Enter 2nd complex number: \n");
	printf("Enter real: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &c2.real);
	printf("Enter Imaginary: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &c2.imaginary);

	res = add(c1, c2);
	printf("\nSum = %.2f+%.2fi\n", res.real, res.imaginary);
}

struct SComplex add(struct SComplex c1, struct SComplex c2) {
	struct SComplex res;
	res.real = c1.real + c2.real;
	res.imaginary = c1.imaginary + c2.imaginary;
	return res;
}
