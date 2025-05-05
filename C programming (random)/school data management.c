
#include<stdio.h>
#include<conio.h>
void addstudent();
void stufentrec();
void searchstd();
void delt();

struct student{
    char first_name[25];
    char last_name[25];
    int roll;
    char class[15];
    char vill[30];
    float per;
};

void main(){
    int choice;
    while(choice!=5){
        printf("\t\t\t=======STUDENT DATABASE MANAGEMENT SYSTEM=======");
        printf("\n\n\n\t\t\t\t 1.Add student Record\n");
        printf("\t\t\t\t 2.Student Record \n");
        printf("\t\t\t\t 3.Search Student \n");
        printf("\t\t\t\t 4.Delete Record \n");
        printf("\t\t\t\t 5.Exit \n");
        printf("\t\t\t\t __________________________\n");
        printf("\t\t\t\t ");
        scanf("%d",&choice);

        switch(choice){
        case 1:
        clrscr();
        addstudent();
        clrscr();
        break;
        }
    }
}

void addstudent(){
    char another;
    File *fp;
    struct student info;

    do{
        clrscr();
        printf("\t\t\t\t====Add Student Info====\n\n\n");
        fp=fopen("student_info.txt","a");
        printf("\n\t\t\tEnter first name : ");
        scanf("%s",&info.first_name);
        printf("\n\t\t\tEnter last name  : ");
        scanf("%s",&info.last_name);
        printf("\n\t\t\tEnter roll no.   : ");
        scanf("%d",&info.roll);
        printf("\n\t\t\tEnter address    : ");
        scanf("%s",&info.vill);
        printf("\n\t\t\tEnter percentage : ");
        scanf("%s",&info.per);
        printf("\t\t\t\t __________________________\n");

        if(fp==NULL){
            fprintf(stderr,"\t\t\tCan't open file\n");
        }
        else{
            printf("\t\t\tRecord stored successfully\n");
        }

        fwrite(&info,sizeof(struct student),1,fp);
        fclose(fp);

        printf("\t\t\tDo you want to add another record?(y/n) : ");
        scanf("%s",&another);
    }
    while(another =='y' || another == 'Y');

    }





