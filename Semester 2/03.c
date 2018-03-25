/*
 *	WAP TO FIND THE LARGEST ELEMENT IN AN ARRAY
 */

#include <stdio.h>

int main() {

	int ar[10] = { };
	int i;
	int in = 0, out = 0;

	printf("Enter your numbers: \n");

	for (i = 0; i < 10; i++) {
		scanf("%d", &in);
		ar[i] = in; ///Since the program was being made on a shitty PC, it wasn't taking in direct input into the array, so integer in was used to act as a buffer
	}

	for (i = 0; i < 10; i++) {
		if (out < ar[i]) {
			out = ar[i];
		}
	}

	printf("%d is the largest number\n", out);

}
