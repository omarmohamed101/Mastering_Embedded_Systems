#include <stdio.h>

void main() {
	printf("Enter the number of elements: \n");
	fflush(stdin);fflush(stdout);
	char text[100];
	gets(text);
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	char c;
	scanf("%c", &c);
	int i, freq = 0;
	for (i = 0; text[i] != 0; i++)
		if (text[i] == c) freq++;
	printf("%d", freq);



}

