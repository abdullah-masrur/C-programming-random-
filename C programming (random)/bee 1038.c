#include<stdio.h>
int main ()
{
    int c,q;

    scanf("%d%d",&c,&q);

    if (c = 1)
    {
        printf("Total: R$ %.2f",4.00*q);

    }
    else if (c = 2)
    {
        printf("Total: R$ %.2f", 4.50*q);
    }

    else if (c=3)
    {
        printf("Total: R$ %.2f",5.00*q);
    }
    else if (c = 4)
    {
        printf("Total: R$ %.2f",2.00*q);
    }
    else if (c = 5)
    {
        printf("Total: R$ %.2f",1.50*q);

    }
    else
    {
        printf("error");
    }



        return 0;
}
