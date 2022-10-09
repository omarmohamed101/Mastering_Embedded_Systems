#include <stdio.h>
#include <stdlib.h>

struct Sstudent {
	char name[50];
	int roll;
	float marks;
};

void main() {

	struct Sstudent students[10];

	int i;
	for (i = 0; i < 10; i++) {
		printf("Enter name: ");
		fflush(stdin); fflush(stdout);
		gets(students[i].name);

		printf("Enter roll number: ");
		fflush(stdin); fflush(stdout);
		scanf("%d", &students[i].roll);

		printf("Enter marks: ");
		fflush(stdin); fflush(stdout);
		scanf("%f", &students[i].marks);
	}

	for (i = 0; i < 10; i++) {
		printf("\nDisplaying information of student %d: \n", i+1);
		printf("Name: %s\n", students[i].name);
		printf("Roll: %d\n", students[i].roll);
		printf("Marks: %f", students[i].marks);
	}


}

