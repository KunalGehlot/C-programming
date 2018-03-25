/*
 * main.c
 *
 *  Created on: 24-Nov-2017
 *      Author: Kunal Gehlot
 */
#include <stdio.h>

int main() {

	int pow, in, out;
	out = 1;

	printf("Enter your number: \n");
	fflush(stdout);
	scanf("%d", &in);

	printf("Enter the power: \n");
	fflush(stdout);
	scanf("%d", &pow);

	for (int i = 1; i <= pow; i++) {
		out = out * in;
	}

	printf("Answer: %d", out);

}

