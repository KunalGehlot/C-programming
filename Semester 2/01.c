/*
 *	WAP TO ENTER AND DISPLAY TEN ELEMENTS OF AN ARRAY
 */

#include <stdio.h>

int main() {

	int array[10];
	int i;

	printf("Enter your numbers: \n");

	for (i = 0; i < 10; i++) {
		scanf("%d", &array[i]);
	}

	printf("Your array is: \n");

	for (i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}

	printf("\n");

}
