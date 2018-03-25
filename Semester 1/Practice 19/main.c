/*
 * main.c
 *
 *  Created on: 24-Nov-2017
 *      Author: Kunal Gehlot
 */
#include<stdio.h>

int main(){

	float in, x;
	x = 1;
	printf("Enter the number of terms required: \n");
	fflush(stdout);
	scanf("%f", &in);

	for(int i = 1; i<=in; i++){
		x = x*i;
		printf("%f +", i/x);
	}

}

