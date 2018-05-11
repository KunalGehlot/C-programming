/*
 *	WAP to take marks of a student as input and calcultae the grades according
 *	to the rules:
 *
 *		>85		'S'
 *	>75 - <84	'A'
 *	>65 - <74	'B'
 *	>55 - <64	'C'
 *	>50 - <54	'D'
 *		<50		'F'
 */

#include <stdio.h>

int main() {

	int num = 0;

	while (num >= 0) {

		printf("Enter student number: (Enter negative to exit)\n");
		scanf("%d", &num);

		if (num > 85) {
			printf("Grade: S!\n");
		} else if (num < 84 && num > 75) {
			printf("Grade: A\n");
		} else if (num < 74 && num > 65) {
			printf("Grade: B\n");
		} else if (num < 64 && num > 55) {
			printf("Grade: C\n");
		} else if (num < 54 && num > 50) {
			printf("Grade: D\n");
		} else if (num < 50 && num > 0) {
			printf("Grade: F\n");
		} else {
			printf("Error 101: Invalid value input\n");
		}

	}

}
