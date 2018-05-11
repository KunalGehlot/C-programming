/*
 *	WAP to read a character and check whether it's vowel or not
 */

#include <stdio.h>

int main() {

	char in;

	printf("Enter your character:\n");

	scanf("%c", &in);

	if (in == 'a' || in == 'e' || in == 'i' || in == 'o' || in == 'u') {
		printf("Vowel\n");
	} else {
		printf("Consonant\n");
	}

}
