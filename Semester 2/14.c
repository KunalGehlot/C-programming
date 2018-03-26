/*
 *	WAP TO READ AND DISPLAY A STRING
 */

#include <stdio.h>

int main() {

	char str[10];

	puts("Enter your string: ");
	gets(str); ///One may get a warning that gets is a dangerous function because of undefined size, fgets should be used for non dangerous function here, but that would need extra lines of codes. 
	///It's because the user can send an unlimited amount of text, which will overwrite the buffer meant for it. This can change the values of other variables. It's a security risk, since with careful study of the program, an attacker can thereby place executable code in memory and arrange so that code is called. Then anything can happen. 

	puts("Your string is: ");
	puts(str);

}
