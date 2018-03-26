/*
 *	WAP TO DELETE ELEMENT FROM AN ARRAY
 */

#include <stdio.h>

int main() {

	int in, i, n;
	int pos;
	int ar[50];

	printf("Enter your array size: \n");
	scanf("%d", &n);

	printf("Enter your array: \n");
	for (i = 0; i < n; i++) {
		scanf("%d", &ar[i]);
	}

	printf("Your array is: \n");
	for (i = 0; i < n; i++) {
		printf(" %d", ar[i]);
	}

	printf("\nEnter the position of element you want to delete: \n");
	scanf("%d", &in);

	for (i = pos - 1; i < n; i++) {
		ar[i] = ar[i + 1];
	}
	printf("Your new array is: \n");

	for (i = 0; i < n + 1; i++) {
		printf("%d\n", ar[i]);
	}

}
