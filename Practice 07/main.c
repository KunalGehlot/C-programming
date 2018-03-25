/*
 * main.c
 *
 *  Created on: 23-Nov-2017
 *      Author: Kunal Gehlot
 */
#include <stdio.h>

int main() {

	int a, b, c, in;

	printf(
			"Choose your program:\n1\tAddition\n2\tSubtraction\n3\tMultiplication\n4\tDivision\n");
	fflush(stdout);
	scanf("%d", &in);

	printf("Enter your numbers: \n");
	fflush(stdout);
	scanf("%d %d", &a, &b);

	switch (in) {
	case 1:
		c = a + b;
		printf("Sum: %d\n", c);
		break;

	case 2:
		c = a - b;
		printf("Sub: %d\n", c);
		break;

	case 3:
		c = a * b;
		printf("Mul: %d\n", c);
		break;

	case 4:
		c = a / b;
		printf("Div: %d\n", c);
		break;

	default:
		printf("Error 101\n");
	}
}

