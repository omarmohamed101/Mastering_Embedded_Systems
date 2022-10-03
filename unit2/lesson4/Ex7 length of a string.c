#include <stdio.h>

void main() {
	printf("Enter a string: \n");
	fflush(stdin);fflush(stdout);
	char text[100];
	gets(text);
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);

	int i;
	for (i = 0; text[i] != 0; i++);

	printf("The length of the string is: %d", i);



}

