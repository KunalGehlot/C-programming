/*
 * 	WAP TO ALLOCATE MEMORY DYNAMICALLY TO AN INTEGER ARRAY
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int *ar, i;

	ar = (int *) malloc(10 * sizeof(int));

	printf("Enter array elements: \n");

	for (i = 0; i < 10; i++) {
		scanf("%d", ar + i);
	}

	for (i = 0; i < 10; i++) {
		printf("\n%d", *(ar + i));
	}

}
