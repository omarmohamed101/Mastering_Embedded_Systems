#include <stdio.h>
#include <stdlib.h>

struct SDistance {
	int feet;
	float inch;
};

void main() {

	struct SDistance d1, d2, res;

	printf("Enter information for the 1st distance: \n");
	printf("Enter feet: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &d1.feet);
	printf("Enter Inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &d1.inch);

	printf("Enter information for the 2nd distance: \n");
	printf("Enter feet: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &d2.feet);
	printf("Enter Inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &d2.inch);

	res.feet = d1.feet + d2.feet;
	res.inch = d1.inch + d2.inch;

	while (res.inch >= 12) {
		res.inch -= 12;
		res.feet++;
	}

	printf("\nSum of distances = %d'-%.1f\"\n", res.feet, res.inch);


}

