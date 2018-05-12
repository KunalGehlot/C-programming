/*
 * 	WAP TO PRINT TEXT IN GRAPHICS
 *
 *  Created on: 11-May-2018
 *      Author: Kunal Gehlot
 */

#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int main() {

	int gd = DETECT, gm;

	initgrpah(&gd, &gm, "");

	outtext("Hello");

	getch();
	closegraph();

}
