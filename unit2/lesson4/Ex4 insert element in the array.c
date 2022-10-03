#include <stdio.h>

void main() {
	printf("Enter the number of elements: \n");
	fflush(stdin);fflush(stdout);
	int n;
	scanf("%d", &n);


	int i, arr[n+1], element, loc;
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	printf("Enter the element to be inserted: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &element);

	printf("Enter the location: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &loc);

	int temp;
	for (i = loc - 1; i <= n; i++) {
		temp = arr[i];
		arr[i] = element;
		element = temp;
	}

	for (i = 0; i < n + 1; i++)
		printf("%d\t", arr[i]);
}

