/*
 *	WAP TO TRANSPOSE A MATRIX
 */

#include <stdio.h>

int main() {

	int i, j, n1, n2;
	int ar1[20][20] = { }, ar2[20][20] = { };

	printf("Enter number of rows: \n");
	scanf("%d", &n1);
	printf("Enter number of columns: \n");
	scanf("%d", &n2);

	printf("Enter your array: \n");

	for (i = 0; i < n1; i++) {
		for (j = 0; j < n2; j++) {
			scanf("%d", &ar1[i][j]);
		}
	}

	for (i = 0; i < n1; i++) {
		for (j = 0; j < n2; j++) {
			ar2[j][i] = ar1[i][j];
		}
	}

	printf("\n");

	for (i = 0; i < n1; i++) {
		for (j = 0; j < n2; j++) {
			printf("%d\t", ar1[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (i = 0; i < n2; i++) {
		for (j = 0; j < n1; j++) {
			printf("%d\t", ar2[i][j]);
		}
		printf("\n");
	}
}
