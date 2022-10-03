#include <stdio.h>

void main() {
	printf("Enter the number of data\n");
	fflush(stdin);fflush(stdout);
	int x;
	scanf("%d", &x);
	fflush(stdin);fflush(stdout);
	float arr[x];
	int i;
	for (i = 0; i < x; i++) {
		printf("%d. Enter number: ", i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f", &arr[i]);
	}


	float res = 0;
	for (i = 0; i < x; i++)
		res += arr[i];

	printf("The average = %.2f", res / x);

}

