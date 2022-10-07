#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
int main(void)
{
   /* request auto detection */
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
   setbkcolor(GREEN);
   setcolor(WHITE);
   rectangle(100,300,300,400);
   delay(1000);
   setcolor(BLUE);
   ellipse(250,250,0,360,60,30);
   delay(1000);
   setcolor(RED);
   arc(350,350,45,135,55);
   /* clean up */
   getch();
   closegraph();
   return 0;
}