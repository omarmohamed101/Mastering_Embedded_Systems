#include <stdio.h>

void main() {
	char c;
	printf("Enter an operator either + or - or * or divide: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &c);

	printf("Enter two operands: ");
	fflush(stdin); fflush(stdout);
	float a, b;
	scanf("%f%f", &a, &b);

	float res = 0;
	switch (c) {
	case '+': {
		res = a + b;
		break;
	}
	case '-': {
		res = a - b;
		break;
	}
	case '*': {
		res = a * b;
		break;
	}
	case '/': {
		res = a / b;
		break;
	}
	}
	printf("res = %f", res);
}

