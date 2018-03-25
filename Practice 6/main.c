/*
 * main.c
 *
 *  Created on: 23-Nov-2017
 *      Author: Kunal Gehlot
 */
#include <stdio.h>

int main() {

	int a, b, c, max;

	printf("Enter three numbers: \n");
	fflush(stdout);
	scanf("%d %d %d", &a, &b, &c);

	max = (a > b ? ((a > c) ? a : c) : (b > c ? b : c));

	printf("%d is the greates number\n", max);
}
