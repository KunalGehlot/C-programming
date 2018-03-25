/*
 * main.c
 *
 *  Created on: 24-Nov-2017
 *      Author: Kunal Gehlot
 */
#include <stdio.h>

int main() {

	int in, a, r;
	a = 0;

	printf("Enter your number: \n");
	fflush(stdout);
	scanf("%d", &in);

	for (int i = 1; i <= in; i++) {

		r = in % i;

		if (r == 0) {
			a++;
		}
	}
	if (a == 2) {
		printf("Prime number\n");
	} else {
		printf("Composite\n");
	}
}

