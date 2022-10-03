#include <stdio.h>

void main() {
	printf("Enter the rows and column of matrix: \n");
	fflush(stdin);fflush(stdout);
	int row, col;
	scanf("%d%d", &row, &col);

	printf("Enter the elements of matrix: \n");

	int i, j, mat[row][col], trans[col][row];
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("Enter Element a%d%d", i+1, j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d", &mat[i][j]);
		}
	}

	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			trans[j][i] = mat[i][j];


	printf("Entered matrix: \n");
	for (i = 0; i < row; i++) {
			for (j = 0; j < col; j++)
				printf("%d\t", mat[i][j]);
			printf("\n");
		}

	printf("Transposed matrix: \n");
	for (i = 0; i < col; i++) {
		for (j = 0; j < row; j++)
			printf("%d\t", trans[i][j]);
		printf("\n");
	}

}

