/*
 * 1.c
 *
 *  Created on: 30-Sep-2017
 *      Author: Kunal Gehlot
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>

int main() {

	int i, temp, swapped;
	int howMany = 10;
	int goals[howMany];

	for (i = 0; i < howMany; i++) {
		goals[i] = (rand() % 25) + 1;
	}

	printf("Original List\n");
	for (i = 0; i < howMany; i++) {
		printf("%d \n", goals[i]);

	}

	while (1) {
		swapped = 0;

		for (i = 0; i < howMany - 1; i++) {
			if (goals[i] > goals[i + 1]) {
				temp = goals[i];
				goals[i] = goals[i + 1];
				goals[i + 1] = temp;
				swapped = 1;
			}
		}

		if (swapped == 0) {
			break;
		}
		//break;
	}

	printf("Sorted List\n");

	for (i = 0; i < howMany; i++) {
		printf("%d \n", goals[i]);

	}

	//return 0;
}
