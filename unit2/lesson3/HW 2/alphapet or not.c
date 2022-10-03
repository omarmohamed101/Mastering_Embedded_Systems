#include <stdio.h>

void main() {
	char c;
	printf("Enter a Character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &c);

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		printf("%c is an alphapet", c);
	else
		printf("%c is not an alphapet", c);
}
