#include<stdio.h>
#include<stdlib.h>
#include<amp_graphics.h>
#pragma warning(disable:4996)

typedef struct PGMImage {
	int w;
	int h;
	unsigned char* data;
}GrayImage;


int main(void) {
	int gdriver = DETECT, gmode;
	int x1 = 200, y1 = 200;
	int x2 = 300, y2 = 300;
	clrscr();

	initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
	line(x1, y1, x2, y2);
	getch();
	closegraph();
	return 0;
}