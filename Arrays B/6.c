/*
 * WAP to calculate sum of all elements in an array using pointers
 */

#include <stdio.h>

int main() {

	int ar[10], i, total = 0, *ptr;

	printf("Enter array elements: \n");

	for (int i = 0; i < 10; i++) {
		scanf("%d", &ar[i]);
	}

	ptr = ar;

	for (int i = 0; i < 10; i++) {
		total = total + *ptr;
		ptr++;
	}

	printf("Sum is: %d\n", total);

}

