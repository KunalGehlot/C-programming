/*
 * main.c
 *
 *  Created on: 24-Nov-2017
 *      Author: Kunal Gehlot
 */
#include<stdio.h>

int main() {

	int in, out, n1, n2;
	out = 0;
	n1 = 1;
	n2 = 0;

	printf("Enter the number of output terms required: \n");
	fflush(stdout);
	scanf("%d", &in);

	for (int i = 0; i < in; i++) {
		printf("%d \n", out);

		out = n1 + n2;
		n1 = n2;
		n2 = out;

	}
}

