#include <stdio.h>

void main() {
	printf("Enter the elements of the 1st matrix\n");
	float mat_1[2][2], mat_2[2][2];
	int i, j;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("Enter a%d%d: ", i+1, j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f", &mat_1[i][j]);
		}
	}
	printf("Enter the elements of the 2nd matrix\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("Enter a%d%d: ", i+1, j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f", &mat_2[i][j]);
		}
	}
	printf("Sum of Matrix: \n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%.2f\t", mat_1[i][j] + mat_2[i][j]);
		}
		printf("\n");
	}

}

