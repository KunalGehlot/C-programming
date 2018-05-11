/*
 *	WAP to pass matrix as an argument to a function, display matrix in the function
 */

#include <stdio.h>

void mat(int mat1[2][2]);

int main() {

	int i, j;
	int temp[2][2];

	printf("Enter your matrix: \n");

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%d", &temp[i][j]);
		}
	}

	mat(temp);

}
void mat(int mat1[2][2]) {

	int i, j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d\t", mat1[i][j]);
		}
		printf("\n");
	}

}
