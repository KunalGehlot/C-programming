/*
 * main.c
 *
 *  Created on: 30-Sep-2017
 *      Author: Kunal Gehlot
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main() {

	int i;
	int meatBalls[5] = { 7, 9, 43, 21, 3 };

	printf("Element \t Address \t Value \n");

	for (i = 0; i < 5; i++) {
		printf("MeatBalls[%d] \t %p \t %d \n", i, &meatBalls[i], meatBalls[i]);
	}

	//Array names are just pointers to the first element
	printf("\nMeatBalls \t\t %p \n", meatBalls);

	//Dereference it
	printf("\n*MeatBalls \t\t %d \n", *meatBalls);

	printf("\n*(MeatBalls+2) \t\t %d \n", *(meatBalls + 2));
}
