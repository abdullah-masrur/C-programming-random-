#include<stdio.h>
int main()
{
    char name[15];
    printf("Enter your name : ");
    gets(name);
    printf("Hi %s! how are you?",name);
    return 0;

}
