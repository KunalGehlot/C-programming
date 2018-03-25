/*
 *	WAP TO GIVE SUMMITION OF ELEMENTS OF AN ARRAY
 */

#include <stdio.h>

int main() {

	int array[10] = { };
	int i;
	int sum = 0;

	printf("Enter your numbers: \n");

	for (i = 0; i < 10; i++) {
		scanf("%d", &array[i]);
	}

	printf("The sum is: \n");

	for (i = 0; i < 10; i++) {
		sum = sum + array[i];
	}

	printf("%d\n", sum);

}
