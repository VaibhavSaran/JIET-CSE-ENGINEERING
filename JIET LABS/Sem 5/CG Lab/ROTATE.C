//Program to Rotate a line
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <math.h>
int round(float x)
{
	float temp;
	temp = x - abs(x);
	if(temp>=0.5)
		return ceil(x);
	else
		return floor(x);
}
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
	rad = (22 * ang)/(180 * 7);
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
	x3=round((d*cos(rad)));
	y3=round((d*sin(rad)));
	if(ang==90)
	{
		x3=x1;
		y3=y1-d;
	}
	else if (ang==180)
	{
		x3=x1-d;
		y3=y1;
	}
	else if (ang==270)
	{
		x3=x1;
		y3=y1+d;
	}
	else if (ang==0)
	{
		x3=x1;
		y3=y1;
	}
	setcolor(RED);
	line(x1,y1,x2,y2);
	setcolor(BLUE);
	line(x1,y1,x3,y3);
	//Clean up
	getch();
	closegraph();
	printf("%d %d",&x3,&y3);
	return 0;
}