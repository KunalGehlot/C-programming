/*
 * main.c
 *
 *  Created on: 24-Nov-2017
 *      Author: Kunal Gehlot
 */
#include <stdio.h>

int main() {

	int in, out, temp, r;
	in = 0;
	out = 0;
	temp = 0;
	r = 0;

	printf("Enter your number: \n");
	fflush(stdout);
	scanf("%d", &in);

	temp = in;

	do {
		r = temp % 10;
		temp = temp - r;
		temp = temp / 10;

		out = (out * 10) + r;

	} while (temp > 0);

	if (out == in) {

		printf("Palindrome number.\n");
	} else {
		printf("boring number.\n");
	}
}

