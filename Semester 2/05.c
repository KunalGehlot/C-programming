/*
 *	WAP TO FIND ELEMENTs IN AN ARRAY
 */

#include <stdio.h>

int main() {

	int ar[20] = { };
	int i, j = 0, sr;
	int in = 0;

	printf("Enter your numbers: \n");

	for (i = 0; i < 20; i++) {
		scanf("%d", &in);
		ar[i] = in; ///Since the program was being made on a shitty PC, it wasn't taking in direct input into the array, so integer in was used to act as a buffer
	}

	printf("Enter element to search for: \n");
	scanf("%d", &sr);

	for (i = 0; i < 20; i++) {
		if (sr == ar[i]) {
			j++;
		}
	}

	printf("%d occurs %d times and is at places: ", sr, j);

	for (i = 0; i < 20; i++) {
		if (sr == ar[i]) {
			printf(" %d ", i);
		}
	}

}
