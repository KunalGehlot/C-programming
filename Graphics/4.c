/*
 * 	WAP TO DRAW AN ELLIPSE
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

	ellipse(100, 100, 0, 360, 120, 60);
	getch();

	closegraph();

}
