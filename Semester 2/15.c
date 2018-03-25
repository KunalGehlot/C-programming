/*
 * 		WAP TO FIND THE LENGTH OF AN ENTERED STRING
 */

#include <stdio.h>

void main()

{

	char string[50];

	int i, length = 0;

	printf("Enter a string \n");

	gets(string);

	/*  keep going through each character of the string till its end */

	for (i = 0; string[i] != '\0'; i++) // Keeps counting until a null is detected
			{

		length++;
	}

	printf("%d", length);

}
