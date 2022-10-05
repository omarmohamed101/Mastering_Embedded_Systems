#include <stdio.h>

void reverse(char text[], int pos);

void main() {

	printf("Enter a sentence: ");
	fflush(stdin); fflush(stdout);
	char text[100];
	gets(text);
	reverse(text, 0);
}

void reverse(char text[], int pos) {
	if (text[pos] == 0)return;
	reverse(text, pos+1);
	printf("%c", text[pos]);
}
