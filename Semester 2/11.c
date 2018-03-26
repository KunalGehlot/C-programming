/*
 *	WAP TO ADD ARRAYS
 */

#include <stdio.h>

int main() {

	int ar1[5][3], ar2[5][3], ar3[5][3];
	int i, j;

	printf("Enter your first array: \n");

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &ar1[i][j]);
		}
	}

	printf("Enter your second array: \n");

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &ar2[i][j]);
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			ar3[i][j] = ar1[i][j] + ar2[i][j];
		}
	}

	printf("Your array is: \n");

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", ar3[i][j]);
		}
		printf("\n");
	}
}
