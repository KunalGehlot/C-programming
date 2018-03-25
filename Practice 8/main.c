/*
 * main.c
 *
 *  Created on: 23-Nov-2017
 *      Author: Kunal Gehlot
 */
#include <stdio.h>

int main() {

	int f, in;

	f = 1;

	printf("Enter your number: \n");
	fflush(stdout);
	scanf("%d", &in);

	for (int i = 1; i <= in; i++) {
		f = f * i;
	}

	printf("Factorial = %d", f);
}

