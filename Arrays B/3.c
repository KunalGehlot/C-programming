/*
 * WAP to copy one string into another and count the number of
 * characters copied
 *
 */

#include <stdio.h>

int main() {

	char str1[30] = { }, str2[30] = { };
	int i = 0;

	printf("Enter to string one: \n");
	scanf("%s", str1);

	while (str1[i] != '\0') {

		str2[i] = str1[i];

		++i;

	}

	str2[i] = '\0';

	printf("%s", str2);
}

