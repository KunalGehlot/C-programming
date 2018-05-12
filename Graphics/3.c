/*
 * 	WAP TO DRAW A RECTANGLE
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

	rectangle(150, 50, 400, 150);
	getch();

	closegraph();

}
