/*
 * 	WAP to access elements of structure named student unsing pointers
 */

#include <stdio.h>
#include<string.h>

struct student {
	char name[20];
	int roll;
	float marks;

};

int main() {

	struct student one = { "Billy", 5, 45.65 };
	struct student *ptr;

	printf("Name\t%s\nRoll\t%d\nMarks\t%.2f\n", one.name, one.roll, one.marks);

	ptr = &one;

	strcpy(ptr->name, "Name");
	ptr->roll = 1;
	ptr->marks = 85;

	printf("Name\t%s\nRoll\t%d\nMarks\t%.2f\n", ptr->name, ptr->roll,
			ptr->marks);

}

