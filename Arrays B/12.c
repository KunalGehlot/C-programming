/*
 * WAP which explains pointer in 1D array
 */

#include <stdio.h>

int main() {

	int ar[5] = { 1, 2, 3, 4, 5 }, i, *ptr;

	ptr = ar;

	for (i = 0; i < 5; i++) {
		printf("%d \t", *ptr);
		ptr++;
	}

}
