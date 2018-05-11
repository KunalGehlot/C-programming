/*
 * 	WAP to Find out whether the given number is prime or not
 *
 */

#include <stdio.h>

int main() {

	int num = 1;

	while (num > 0) {

		printf("Enter any positive number: (0 to exit)\n");
		scanf("%d", &num);

		if (num % 2 == 0) {
			printf("Even number\n");
		} else {
			printf("Odd number\n");
		}
	}
}
