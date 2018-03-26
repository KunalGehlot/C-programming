/*
 *	WAP TO ENTER AND PRINT A 2D ARRAY (MATRICE)
 */

#include <stdio.h>

int main() {

	int ar[5][3];
	int i, j;

	printf("Enter your 2D array: \n");

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &ar[i][j]);
		}
	}

	printf("Your array is: \n");

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", ar[i][j]);
		}
		printf("\n");
	}

}
