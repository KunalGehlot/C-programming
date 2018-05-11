/*
 * 	Write a function (using pointer parameters) that compares 2 integer arrays to see
 * 	whether they are identical. The function returns 1 if they're identical, 0 otherwise.
 */

#include <stdio.h>

int comp(int *a, int *b);

int main() {

	int x, y, ret = 2;

	printf("Enter two numbers: \n");
	scanf("%d %d", &x, &y);

	ret = comp(&x, &y);

	printf("Return value is: %d", ret);

}

int comp(int *a, int *b) {

	if (a == b) {
		return 1;

	} else if (a != b) {
		return 0;

	}

}
