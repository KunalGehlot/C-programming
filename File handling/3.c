/*
 *  WAP to copy from one file to another
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	FILE *f1, *f2;
	char buffer;

	f1 = fopen("Text.txt", "r");
	f2 = fopen("Text2.txt", "w");

	while ((buffer = fgetc(f1)) != EOF) {
		fputc(buffer, f2);
		printf("%c", buffer);
	}

	fclose(f1);
	fclose(f2);

}
