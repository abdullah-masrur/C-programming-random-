#include<stdio.h>
int main()
{
    char string1[20],string2[]= "Hello there";
    int i;
    printf("Enter string with white spaces: ");
    scanf("%s",string1);
    printf("\n string 2 is %s",string2);
    printf(\n string 1 is );

    for(i=0; string1 [i]!='\0'; i++)
    {
        printf("%c is string 1",string1[i]);
    }
}
