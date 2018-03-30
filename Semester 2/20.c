/*
 * 		WAP TO MAKE A STUDENT RECORD USING STRUCTURES
 */

#include <stdio.h>
#include <string.h>

struct record {

	int rollno;
	char name[20];
	int age;
	float marks;
};

int main() {

	int i = 0;

	struct record s[6];

	for (i = 1; i < 4; i++) {

		printf("Enter student %d roll no: \n", i);
		scanf("%d", &s[i].rollno);
		printf("Enter student %d name: \n", i);
		scanf("%s", s[i].name);
		printf("Enter student %d age: \n", i);
		scanf("%d", &s[i].age);
		printf("Enter student %d marks: \n", i);
		scanf("%f", &s[i].marks);

	}

	s[4].rollno = 4;
	strcpy(s[4].name, "Bucky Roberts");
	s[4].age = 27;
	s[4].marks = 99.99;

	s[5].rollno = 5;
	strcpy(s[5].name, "Zackabre");
	s[5].age = 18;
	s[5].marks = 95.68;

	s[6].rollno = 6;
	strcpy(s[6].name, "William Anderson");
	s[6].age = 25;
	s[6].marks = 84.45;

	printf("-------------- STUDENT RECORD --------------\n");

	for (i = 1; i < 7; i++) {

		printf("Student #%d: \n", i);
		printf("\t Roll number - %d\n", s[i].rollno);
		printf("\t Name - %s\n", s[i].name);
		printf("\t Age - %d\n", s[i].age);
		printf("\t Marks - %f\n", s[i].marks);
		printf("\n");

	}
}
