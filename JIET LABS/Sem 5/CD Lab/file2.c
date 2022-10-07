#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    char ch;
    FILE *fp1,*fp2;
    fp1=fopen("D:\\CD LAB\\dummy.txt","r");
    fp2=fopen("D:\\CD LAB\\dummyOutput.txt","w");
    if (fp1==NULL)
    {
        printf("Unable to open file");
        exit(0);
    }
    while(1)
    {
        ch=fgetc(fp1);
        if (ch == EOF)
            break;
        else
        {
            putc(ch,fp2);
            printf("%c",ch);
        }
    }
    printf("\n File copy made succesfully");
    fp1.close();
    fp2.close();
    return 0;
}
