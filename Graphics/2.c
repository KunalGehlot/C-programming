/*
 * 	WAP TO DRAW A CIRCLE
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

	circle(200, 250, 50);
	getch();

	closegraph();

}
