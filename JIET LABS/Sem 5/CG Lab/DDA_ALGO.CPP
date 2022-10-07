#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <math.h>
int round (float x)
{
	float y;
	y = x - floor(x);
	if (y>=0.5)
		return ceil(x);
	else
		return floor(x);
}
int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   //Input Coordinates
   int x1,y1,x2,y2,dx,dy,steps,xIncr,yIncr,x,y,i;
   printf("Enter the starting coordinate (x1,y1): ");
   scanf("%d %d",&x1,&y1);
   printf("Enter the ending coordinate (x2,y2): ");
   scanf("%d %d",&x2,&y2);
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
   dx=x2-x1;
   dy=y2-y1;
   if (abs(dx)>abs(dy))
	steps = abs(dx);
   else
	steps = abs(dy);
   xIncr=dx/steps;
   yIncr=dy/steps;
   x=x1;
   y=y1;
   setbkcolor(WHITE);
   setcolor(RED);
   for(i=1;i<=steps;i++)
   {
	delay(50);
	x+=xIncr;
	y+=yIncr;
	putpixel(round(x),round(y),RED);
   }
   outtextxy(300,35,"DDA ALGORITHM");
   outtextxy(x1+5,y1-5,"x1,y1");
   outtextxy(x2+5,y2+5,"x2,y2");
   /* clean up */
   getch();
   closegraph();
   return 0;
}