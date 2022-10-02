#include <stdio.h>

void main() {
	char c;
	printf("Enter a Character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &c);
	printf("ASCII value of G = %d",c);
}
