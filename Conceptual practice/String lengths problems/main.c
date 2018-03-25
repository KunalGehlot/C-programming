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

	char movie[20];
	char * pMovie = movie;

	fgets(pMovie, 20, stdin);
	puts(pMovie);
}
