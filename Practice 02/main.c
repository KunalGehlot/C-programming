/*
 * main.c
 *
 *  Created on: 23-Nov-2017
 *      Author: Kunal Gehlot
 */
#include <stdio.h>

int main() {

	float a, b, c, d, e, total, per;

	printf("Enter marks of five different subjects:\n");
	fflush(stdout);
	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

	total = a + b + c + d + e;

	per = total / 5;

	printf("Total Marks: %f \t Percentage: %f", total, per);

}

