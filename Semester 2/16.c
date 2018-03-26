/*
 *	WAP TO FIND THE FREQUENCY OF ANY CHARACTER IN A STRING
 */

#include <stdio.h>

int main() {

	int i, l = 0;
	char str[20], c;

	printf("Enter your string: \n");
	gets(str);

	printf("Enter the char to search: \n");
	scanf("%c", &c);

	for (i = 0; i < 20; i++) {
		if (str[i] == c) {
			l++;
		}
	}

	printf("%c is %d times", c, l);

}
