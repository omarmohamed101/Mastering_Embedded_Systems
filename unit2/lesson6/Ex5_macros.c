#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415
#define area(r) PI*r*r
void main() {

	float r;
	printf("Enter the radius: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &r);

	printf("%.2f", area(r));


}

