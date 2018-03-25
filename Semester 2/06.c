/*
 *	WAP TO INSERT ELEMENTS IN AN ARRAY
 */

#include <stdio.h>

int main() {

	int in, i, n, temp;
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

	printf("\nEnter the element you want to insert: \n");
	scanf("%d", &in);

	printf("Enter the position: \n");
	scanf("%d", &pos);

	for (i = n - 1; i >= pos; i--) {
		ar[i + 1] = ar[i];
	}

	ar[pos] = in;

	printf("Your new array is: \n");

	for (i = 0; i < n + 1; i++) {
		printf("%d\n", ar[i]);
	}

}
