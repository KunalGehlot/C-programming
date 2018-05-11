/*
 *	WAP to check whether the entered number is prime or not
 */

#include <stdio.h>

int main() {

	int in, i, j = 0;

	printf("Enter your number: \n");
	scanf("%d", &in);

	for (i = 1; i < in; i++) {

		if (in % i == 0) {
			j++;
		} else {
			continue;
		}

	}

	if (j == 1) {
		printf("Prime number\n");
	} else {
		printf("Composite number\n");
	}

}
