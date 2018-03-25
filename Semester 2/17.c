/*
 * 		WRITE A PROGRAM TO REVERSE A STRING WITHOUT USING strrev
 */

#include <stdio.h>

int main() {
	
	char str1[100], str2[100];
	int i, j, k = 0;

	printf("Input a string\n");
	gets(str1);

	while (str1[k] != '\0') {
		k++;
		j = k - 1;
	}

	printf("j is %d\n", j);

	for (i = 0; i < k; i++) {
		str2[i] = str1[j];
		j--;
	}

	str2[i] = '\0';

	printf("%s\n", str2);

}
