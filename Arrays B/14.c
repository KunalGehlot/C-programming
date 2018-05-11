/*
 * 	WAP to find average marks of a student using function, pass an array which
 * 	stores marks and roll number to a function as parameter
 */

#include <stdio.h>

void avrg(int amk[10][3], int roll[10]);

int main() {

	int i, j;

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int mrk[10][3], rol[10];

	for (i = 0; i < 10; i++) {
		printf("Enter student #%d roll no.: \n", i + 1);
		scanf("%d", &rol[i]);
		printf("Enter student #%d marks: \n", i + 1);
		for (j = 0; j < 3; j++) {
			if (j == 0) {
				printf("\t Math: \n");
			} else if (j == 1) {
				printf("\t Chemistry: \n");
			} else if (j == 2) {
				printf("\t Physics: \n");
			}
			scanf("%d", &mrk[i][j]);
		}
	}

	avrg(mrk, rol);

}

void avrg(int mk[10][3], int roll[10]) {

	int i, j, total = 0;
	float avg[10];

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 3; j++) {
			total = total + mk[i][j];
		}
		avg[i] = total / 3;
		total = 0;
	}

	printf("Average is: \n");
	for (i = 0; i < 10; i++) {
		printf("Roll number %d\n", roll[i]);
		printf("\t Average marks \t %.2f\n", avg[i]);
	}

}
