/*
 * main.c
 *
 *  Created on: 24-Nov-2017
 *      Author: Kunal Gehlot
 */
#include <stdio.h>

void swap(int *, int *);

int in1, in2, out;

int main() {

	printf("Enter your numbers:\n");
	fflush(stdout);
	scanf("%d %d", &in1, &in2);

	swap(&in1, &in2);

	printf("%d \t %d", in1, in2);

}
void swap(int *x, int *y) {

	int temp;

	temp = *x;
	*x = *y;
	*y = temp;

	//printf("%d \t %d", x, y);
}
