/*
 * 23.c		WAP TO ADD TWO NUMBERS USING POINTERS
 *
 *  Created on: 07-Apr-2018
 *      Author: Kunal Gehlot
 */

#include <stdio.h>
#include <conio.h>

int main() {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int x, y, t;
	int *a, *b;
	a = &x;
	b = &y;

	printf("Enter first number: \n");
	scanf("%d", &x);

	printf("Enter second number: \n");
	scanf("%d", &y);

	t = *a + *b;

	printf("The sum is: %d", t);

}
