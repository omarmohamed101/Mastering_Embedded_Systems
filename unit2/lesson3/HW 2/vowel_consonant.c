#include <stdio.h>

void main() {
	char c;
	printf("Enter an Alphapet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &c);

	if (c == 'a' || c == 'e' || c == 'o' || c == 'u' || c == 'i')
		printf("%c is vowel", c);
	else
		printf("%c is consonant", c);
}
