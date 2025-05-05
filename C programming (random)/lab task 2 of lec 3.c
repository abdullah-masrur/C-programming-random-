#include<stdio.h>
int main()
{
    char a;

    printf("Enter a character :");
    scanf("%c",&a);

    if(a>='a'&&a<='z' || a>='A'&& a<='Z')
    {
        printf("This is an alphabet\n");
    }
    else
    {
        printf("This is not an alphabet");
    }

    return 0;

}
