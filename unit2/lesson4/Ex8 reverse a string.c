#include <stdio.h>

void main() {
	printf("Enter a string: \n");
	fflush(stdin);fflush(stdout);
	char text[100];
	gets(text);


	int i, j;
	for (i = 0, j = strlen(text) - 1; i < j; i++, j--) {
		char temp = text[i];
		text[i] = text[j];
		text[j] = temp;
	}

	printf("The new string is: %s", text);



}

