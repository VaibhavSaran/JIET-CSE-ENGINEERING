//Program to Rotate a line
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <math.h>
#define pi 22/7
#define degtorad pi/180
int main()
{
	/* request auto detection */
	int gdriver = DETECT, gmode, errorcode;
	//Input Coordinates
	int x1,y1,x2,y2,x3,y3,ang,dx,dy,flag;
	float rad,d;
	printf("Enter the starting coordinate (x1,y1): ");
	scanf("%d %d",&x1,&y1);
	printf("Enter the ending coordinate (x2,y2): ");
	scanf("%d %d",&x2,&y2);
	printf("Enter the rotating angle(Complete degrees): ");
	scanf("%d",&ang);
	while(ang>=360)
		ang-=360;
	rad = (float)(-ang)*degtorad;
	/* initialize graphics and local variables */
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
	/* read result of initialization */
	errorcode = graphresult();
	if (errorcode != grOk)  /* an error occurred */
	{
		printf("Graphics error: %s\n",grapherrormsg(errorcode));
		printf("Press any key to halt:");
		getch();
		exit(1); /* terminate with an error code */
	}
	//Translation code
	setbkcolor(WHITE);
	setcolor(GREEN);
	cleardevice();
	outtextxy(300,25,"Input line");
	line(x1,y1,x2,y2);
	setcolor(RED);
	outtextxy(x1+5,y1-5,"x1,y1");
	outtextxy(x2+5,y2+5,"x2,y2");
	setcolor(BLUE);
	getch();
	cleardevice();
	outtextxy(250,15,"Line after rotating");
	dx = x2 - x1;
	dy = y2 - y1;
	flag = pow(dx,2)+pow(dy,2);
	d = sqrt(flag);
	x3 = x1 + d * (cos(rad));
	y3 = y1 + d * (sin(rad));
	setcolor(RED);
	line(x1,y1,x2,y2);
	setcolor(BLUE);
	line(x1,y1,x3,y3);
	//Clean up
	getch();
	closegraph();
	return 0;
}