/*
 * 	WAP to multiply 2 arrays of 3x4 and 4x2
 */

#include <stdio.h>

int main() {

	int i, j, k;
	int ar1[3][4], ar2[4][2], out[3][2];

	printf("Enter your first array: \n");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &ar1[i][j]);
		}
	}

	printf("Enter your second array: \n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%d", &ar2[i][j]);
		}

		for (i = 0; i < 3; i++) {
			for (j = 0; j < 2; j++) {
				for (k = 0; k < 4; k++) {
					out[i][j] = out[i][j] + ar1[i][k] * ar2[k][j];
				}
			}
		}

		for (i = 0; i < 3; i++) {
			for (j = 0; j < 2; j++) {
				printf("%d\t", out[i][j]);
			}
			printf("\n");
		}

	}
