/*
 * main.c
 *
 *  Created on: 23-Nov-2017
 *      Author: Kunal Gehlot
 */
# include <stdio.h>

int main() {

	int a, b;

	printf("Enter two numbers: \n");
	fflush(stdout);
	scanf("%d %d", &a, &b);

	a = a + b;
	b = a - b;
	a = a - b;
	printf("After swapping : %d \t %d", a, b);
}

