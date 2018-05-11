/*
 * 	WAP to read 3x3 matrix and print its values and transpose
 */

#include <stdio.h>

int main() {

	int mat1[3][3], mat2[3][3], i, j;

	printf("Enter your matrix: \n");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &mat1[i][j]);
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", mat1[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			mat2[j][i] = mat1[i][j];
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", mat2[i][j]);
		}
		printf("\n");
	}

}
