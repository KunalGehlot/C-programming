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

	//char movie1[] = "The Return of Buckman!";
	char * movie2 = "Bucky";

	puts(movie2);

	movie2 = "New movie title";
	puts(movie2);

}
/*
 * The key concept is that whenever you just make a very
 * simple array of characters, you cannot change it as it's
 * constant. So we did was take pointer to change it a
 * variable, thus making you able to change it.
 */
