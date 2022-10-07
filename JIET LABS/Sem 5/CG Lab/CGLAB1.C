#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
int main()
{
	int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
	//printf("%d  %d",getmaxx(),getmaxy());
	//line(100,100,200,200);
	line(250,300,250,200);
	line(250,200,350,200);
	line(350,200,350,300);
	line(250,300,350,300);
	line(250,200,300,100);
	line(350,200,300,100);
	getch();
	return 0;
}