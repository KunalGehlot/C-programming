/*
 * 24.c		WAP TO FIND LARGEST OF 3 NUMBERS USING POINTERS AND FUNCTION
 *
 *  Created on: 07-Apr-2018
 *      Author: Kunal Gehlot
 */

#include <stdio.h>
#include <conio.h>

int L(int *p, int *q, int *r);

int main() {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int *a, *b, *c;
	int x, y, z;
	int temp;

	a = &x;
	b = &y;
	c = &z;

	printf("Enter your three numbers: \n");
	scanf("%d %d %d", &x, &y, &z);

	temp = L(a, b, c);

	printf("%d is the largest number", temp);

}

int L(int *p, int *q, int *r) {

	if (*p > *q && *p > *r) {
		return *p;
	} else if (*q > *p && *q > *r) {
		return *q;
	} else if (*r > *p && *r > *q) {
		return *r;
	}
}
