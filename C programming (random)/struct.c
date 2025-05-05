#include<stdio.h>

struct player
{
    char name[25];
    int id;
    int age;
    char position[15];

};

int main()
{
    struct player pl1,pl2;
    pl1.id;
    pl1.age;
    pl1.position;
    pl1.name;

    pl2.id;
    pl2.age;
    pl2.position;
    pl2.name;

    printf("\t\t\tSubmit information for player one\n\t\t\t----------------------------------\n\n");

    printf("\tName = ");
    scanf("%s",&pl1.name);

    printf("\tId = ");
    scanf("%d",&pl1.id);

    printf("\tage = ");
    scanf("%d",&pl1.age);



    printf("\tPosition = ");
    scanf("%s",&pl1.position);




    printf("\n\t\t\tSubmit information for player 2\n\t\t\t----------------------------------\n\n");

    printf("\tName = ");
    scanf("%s",&pl2.name);

    printf("\tId = ");
    scanf("%d",&pl2.id);

    printf("\tage = ");
    scanf("%d",&pl2.age);



    printf("\tPosition = ");
    scanf("%s",&pl2.position);

    printf("\nPlayer One info:\n\tName = %s\n\tId = %d\n\tAge= %d\n\tPosition = %s",pl1.name,pl1.id,pl1.age,pl1.position);

    printf("\n\nPlayer Two info:\n\tName = %s\n\tId = %d\n\tAge= %d\n\tPosition = %s",pl2.name,pl2.id,pl2.age,pl2.position);



}

