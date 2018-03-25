/*
 * MAIN.C
 *
 *  Created on: 23-Nov-2017
 *      Author: Kunal Gehlot
 */
#include <stdio.h>

void main() {

	int a, b, c;

	printf("Enter three numbers: \n");
	fflush(stdout);
	scanf("%d %d %d", &a, &b, &c);

	if (a>b && a>c) {
		printf ("Max is: %d", a);
	} else if (b>a && b>c) {
		printf ("Max is: %d", b);
	} else if (c>a && c>b) {
		printf ("Max is: %d", c);
	} else {
		printf("Error 101");
	}
}
