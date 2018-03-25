/*
 * main.c
 *
 *  Created on: 24-Nov-2017
 *      Author: Kunal Gehlot
 */
#include<stdio.h>

int main() {

	int in, test1, test2;

	printf("Enter your number: \n");
	fflush(stdout);
	scanf("%d", &in);

	test1 = in % 4;
	test2 = in % 400;

	if (test1 == 0 || test2 == 0) {
		printf("Leap year\n");
	} else {
		printf("Non leap yr\n");
	}

}

