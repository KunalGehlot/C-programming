/*
 * main.c
 *
 *  Created on: 24-Nov-2017
 *      Author: Kunal Gehlot
 */
#include <stdio.h>

int main() {

	int in, temp, r, out;

	out = 0;

	printf("Enter your number: \n");
	fflush(stdout);
	scanf("%d", &in);

	temp = in;

	do {
		r = temp % 10;
		temp = temp - r;
		temp = temp / 10;
		out = out + (r * r * r);
	} while (temp > 0);

	if (in == out) {
		printf("Armstrong number\n");
	} else {
		printf("Simple boring number\n");
	}
}

