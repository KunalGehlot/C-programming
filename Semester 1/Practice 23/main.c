/*
 * main.c
 *
 *  Created on: 24-Nov-2017
 *      Author: Kunal Gehlot
 */
#include<stdio.h>

int main() {

	for (int i = 1; i < 6; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
}

