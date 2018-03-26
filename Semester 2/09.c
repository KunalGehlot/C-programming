/*
 *	WAP TO SORT AN ARRAY
 */

#include <stdio.h>

int main() {

	int ar1[10];
	int temp = 0;
	int i, j;

	printf("Enter your array: \n");

	for (i = 0; i < 10; i++) {
		scanf("%d", &ar1[i]);
	}

	while (i) {
		j = 0;

		for (i = 0; i < 9; i++) {
			if (ar1[i] > ar1[i + 1]) {
				temp = ar1[i];
				ar1[i] = ar1[i + 1];
				ar1[i + 1] = temp;
				j = 1;
			}

		}
		if (j == 0) {
			break;
		}
	}
	printf("Your sorted array is: \n");

	for (i = 0; i < 10; i++) {
		printf(" %d ", ar1[i]);
	}

}
