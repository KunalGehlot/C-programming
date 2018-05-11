/*
 * 	WAP to input 10 integer numbers in an array and find average of enteredn numbers
 */

#include <stdio.h>

int main() {

	int ar[10], i, total = 0;

	printf("Enter array elements: \n");

	for (int i = 0; i < 10; i++) {
		scanf("%d", &ar[i]);
	}

	for (int i = 0; i < 10; i++) {
		total = total + ar[i];
	}

	printf("Avergae is: %d\n", total / 10);

}
