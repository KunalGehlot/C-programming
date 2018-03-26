/*
 *	WAP TO MULTIPLY TWO MATRICES
 */

#include <stdio.h>

int main() {

	int i, j, k;
	int ar1[2][3] = { }, ar2[3][1] = { }, out[2][1] = { };

	printf("Enter your first array: \n");

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &ar1[i][j]);
		}
	}

	printf("Enter your second array: \n");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 1; j++) {
			scanf("%d", &ar2[i][j]);
		}
	}

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 1; j++) {
			for (k = 0; k < 3; k++) {
				out[i][j] = out[i][j] + ar1[i][k] * ar2[k][j];
			}
		}
	}

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 1; j++) {
			printf("%d\t", out[i][j]);
		}
		printf("\n");
	}

}
