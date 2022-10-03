#include <stdio.h>

void main() {
	printf("Enter the number of elements: \n");
	fflush(stdin);fflush(stdout);
	int n;
	scanf("%d", &n);


	int i, arr[n], element;
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	printf("Enter the element to be searched for: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &element);

	int loc = -1;
	for (i = 0; i < n; i++)
		if (arr[i] == element)
			loc = i;

	printf("The location of the element: %d\t", loc);
}

