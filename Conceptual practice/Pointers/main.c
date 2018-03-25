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

	int tuna = 19;

	int * pTuna = &tuna;

	printf("%p \n\n", &tuna);

	printf("Address \t Name \t Value \n");
	printf("%p \t %s \t %d \n", pTuna, "tuna", tuna);

	printf("%p \t %s \t %p \n", &pTuna, "pTuna", pTuna);
}
