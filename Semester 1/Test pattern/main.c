/*
 * main.c
 *
 *  Created on: 23-Nov-2017
 *      Author: Kunal Gehlot
 */
#include <stdio.h>

int main() {

	for (int i = 1; i < 9; i++) {
		for (int j = 1; j <= 9 - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}

}
