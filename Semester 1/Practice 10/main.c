/*
 * main.c
 *
 *  Created on: 24-Nov-2017
 *      Author: Kunal Gehlot
 */
#include <stdio.h>

int main() {

	int in, out;

	printf("Enter your number: \n");
	fflush(stdout);
	scanf("%d", &in);

	for (int i = 1; i < 11; i++) {
		out = in * i;
		printf("%d * %d = %d\n", in, i, out);
	}

}

