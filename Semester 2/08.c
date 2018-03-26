/*
 *	WAP TO MERGE TWO ARRAYS
 */

#include <stdio.h>

int main() {

	int i = 0, j = 0;
	int n1, n2, s;
	int ar1[50], ar2[50], ar3[100];

	printf("Enter your first array size: \n");
	scanf("%d", &n1);
	printf("Enter your first array: \n");

	for (i = 0; i < n1; i++) {
		scanf("%d", &ar1[i]);
	}

	printf("Enter your second array size: \n");
	scanf("%d", &n2);

	printf("Enter your second array: \n");

	for (i = 0; i < n2; i++) {
		scanf("%d", &ar2[i]);
	}

	s = n1 + n2;

	for (i = 0; i < n1; i++) {
		ar3[j] = ar1[i];
		j++;
	}

	for (i = 0; i < n2; i++) {
		ar3[j] = ar2[i];
		j++;
	}

	printf("Your new merged array is: \n");

	for (i = 0; i < s; i++) {
		printf("%d\n", ar3[i]);
	}
}
