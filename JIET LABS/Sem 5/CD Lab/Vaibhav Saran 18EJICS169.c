#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    char name[50];
    int marks,i,n;
    time_t t;
    time(&t);
    printf("Date : %s",ctime(&t));
    printf("18EJICS169_VAIBHAV_SARAN\n");
    printf("Enter number of students: ");
    scanf("%d",&n);
    FILE *fptr;
    fptr=(fopen("student.txt","a"));
    if(fptr==NULL) {
        printf("Error!");
        exit(1);
    }
    fprintf(fptr,"\n\nEdited: %s\n",ctime(&t));
    for (i=0;i<n;++i) {
        printf("For student%d\nEnter name: ",i+1);
        scanf("%s",name);
        printf("Enter marks: ");
        scanf("%d",&marks);
        fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
        fprintf(fptr,"\n\nEdited: %s\n Name: VAIBHAV_SARAN_18EJICS169\n\n",ctime(&t));
    }
    fclose(fptr);
    return 0;
}
