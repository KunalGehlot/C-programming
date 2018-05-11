/*
 *  WAP to print and read a file
 */

#include <stdio.h>
#include <string.h>

int main() {

	FILE *fp;
	char txt[] = "The quick brown fox jumps over the lazy dog";
	char txt2[100];

	fp = fopen("Text.txt", "w+");

	fwrite(txt, strlen(txt) + 1, 1, fp);

	fseek(fp, 0, SEEK_SET);

	fread(txt2, strlen(txt) + 1, 1, fp);

	printf("%s \t\t is the entered string\n", txt2);

	fclose(fp);

}
