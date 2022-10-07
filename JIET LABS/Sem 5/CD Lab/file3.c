#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    char ch[500];
    FILE *fp;
    fp=fopen("input.txt","w");
    if (fp==NULL)
    {
        printf("Unable to open file");
        exit(0);
    }
    printf("Enter a statement: ");
    gets(ch);
    fprintf(fp,"%s",ch);
    fclose(fp);
    return 0;
}
