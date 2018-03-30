/*
 * 		WAP TO MAKE A STUDENT RECORD USING STRUCTURES (SINGLE STUDENT)
 */
#include <stdio.h>

struct record {

	int rollno;
	char name[20];
	int age;
	float marks;
};

int main() {

	struct record s1;

	printf("Enter student roll no: \n");
	scanf("%d", &s1.rollno);
	printf("Enter student name: \n");
	scanf("%s", s1.name);
	printf("Enter student age: \n");
	scanf("%d", &s1.age);
	printf("Enter student marks: \n");
	scanf("%f", &s1.marks);

	printf("\t Roll number - %d\n", s1.rollno);
	printf("\t Name - %s\n", s1.name);
	printf("\t Age - %d\n", s1.age);
	printf("\t Marks - %f\n", s1.marks);

}
