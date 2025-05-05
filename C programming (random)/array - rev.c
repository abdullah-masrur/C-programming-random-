#include<stdio.h>
#include<string.h>

int main()
{
    char name[100];
    printf("enter name : ");
    gets(name);

    printf("your name is %s\n",name);


    printf("reversed : %s\n",strrev(name));

    int c=strcasecmp(name,strrev(name));
    if (c==0)
    {
        printf("this is pallindom");
    }


}
