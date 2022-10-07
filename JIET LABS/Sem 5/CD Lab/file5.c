//Program to remove comments from  a file and make a new file out of it
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    char ch,flag,a,b,c,d;
    FILE *fp1,*fp2;
    fp1=fopen("D:\\CD LAB\\dummy2.txt","r");
    fp2=fopen("D:\\CD LAB\\dummy2Output.txt","w");
    if (fp1==NULL)
    {
        printf("Unable to open file");
        exit(0);
    }
    ch=fgetc(fp1);
    while(ch!=EOF)
    {
        if (ch == '/' )
        {
            if (d=fgetc(fp1) == '*' )
            {
                while((a=fgetc(fp1))!=EOF)
                {
                    if(a=='*')
                    {
                        b=fgetc(fp1);
                        if(b=='/')
                            break;
                    }
                }
            }
            else if (ch == '/')
            {
                while((d=fgetc(fp1))!=EOF)
                {
                    if(d=='\n')
                        break;
                }
            }
            else
            {
                fputc(ch,fp2);
                fputc(d,fp2);
            }
        }
        else
            fputc(ch,fp2);
        ch=fgetc(fp1);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}






















/*
#include <stdio.h>
#include <stdlib.h>
FILE *fp , *fp2;
void check(char c)
{
    char d;

    if( c == '/')
    {
        if((d=fgetc(fp))=='*')
         block();
        else if( d == '/')
          single();
        else
        {
            fputc(c,fp2);
            fputc(d,fp2);
        }
    }
    else
        fputc(c,fp2);
}
void block()
{
    char d,e;
    while((d=fgetc(fp))!=EOF)
    {
        if(d=='*')
        {
            e=fgetc(fp);
            if(e=='/')
                return;
        }
   }
}
void single()
{
    char d,e;
    while((d=fgetc(fp))!=EOF)
    {
        if(d=='\n')
            return;
    }
}
int main(void)
{
    char c;
    fp = fopen ("dummy2.txt","r") ;
    fp2 = fopen ("dummy2Output.txt","w") ;
    while((c=fgetc(fp))!=EOF)
        check(c);
    fclose(fp);
    fclose(fp2);
    return 0;
}

*/
