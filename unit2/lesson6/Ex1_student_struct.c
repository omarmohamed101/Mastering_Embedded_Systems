#include <stdio.h>
#include <stdlib.h>

struct Sstudent {
	char name[50];
	int roll;
	float marks;
};

void main() {

	struct Sstudent student;

	printf("Enter name: ");
	fflush(stdin); fflush(stdout);
	gets(student.name);

	printf("Enter roll number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &student.roll);

	printf("Enter marks: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &student.marks);

	printf("Displaying information: \n");
	printf("Name: %s\n", student.name);
	printf("Roll: %d\n", student.roll);
	printf("Marks: %f", student.marks);

}

