/*
 * main.c
 *
 *  Created on: 24-Nov-2017
 *      Author: Kunal Gehlot
 */
#include<stdio.h>

int main() {

	for (int i = 0; i < 11; i++) {

		if (i == 3 || i == 5) {
			continue;
		}
		printf("%d\n", i);

	}
}

