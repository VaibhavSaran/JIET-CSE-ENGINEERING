#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   //Variables
   int x,y;
   //Graphics Mode
   int gdriver = DETECT, gmode, errorcode;
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }
   //HUT Models
   x=getmaxx();
   y=getmaxy();
   setbkcolor(CYAN);
   setcolor(BROWN);
   line(x/4,y/4,(5*x)/8,y/4);//line 1
   line((5*x)/8,y/4,(5*x)/8,(7*y)/8);//line 2
   line((5*x)/8,(7*y)/8,x/8,(7*y)/8);//line 3
   line((3*x)/8,(7*y)/8,(3*x)/8,y/2);//line 4
   line(x/8,(7*y)/8,x/8,y/2);//line 5
   line(x/8,y/2,(5*x)/8,y/2);//line 6
   line(x/8,y/2,x/4,y/4);//line 7
   line((3*x)/8,y/2,x/4,y/4);//line 8
   /* clean up */
   getch();
   closegraph();
   return 0;
}