/*
 *	WAP TO FIND THE LENGTH OF AN ENTERED STRING
 */

#include <stdio.h>

int main() {

	int i, l = 0;
	char str[20];

	printf("Enter your string: \n");
	gets(str);

	for (i = 0; str[i] != '\0'; i++) {
		l++;
	}

	printf("%d is the length of the string.\n", l);
}
