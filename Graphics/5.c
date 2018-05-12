/*
 * 	WAP TO DRAW A LINE
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

	line(100,100,200,100);
	getch();

	closegraph();

}
