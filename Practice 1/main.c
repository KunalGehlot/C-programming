/*
 * main.c
 *
 *  Created on: 23-Nov-2017
 *      Author: Kunal Gehlot
 */
#include <stdio.h>
//#include <conio.h>
int main() {

	float p, r, t, si;
	//clrscr();

	printf("\nEnter Principal, Rate and Time");
	fflush(stdout);
	scanf("%f %f %f", &p, &r, &t);

	si = (p * r * t / 100);

	printf("\nSimple Interest = %f", si);

}
