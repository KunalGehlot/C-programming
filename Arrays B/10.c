/*
 * 	WAP to print the following series:
 * 	Sin x = x – x3 /3 + x5 /5 - . . . . . .
 *
 */

#include <stdio.h>

int main() {

	int i, j = 1;

	printf("Sin x = x ");

	for (i = 3; i < 20; i += 2) {
		if (j % 2 == 0) {
			printf(" + ");
		} else {
			printf(" - ");
		}
		printf("(x^%d)/%d!", i, i);
		j++;
	}

}
