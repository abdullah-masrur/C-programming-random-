#include<stdio.h>
int main()
{
    int positive=0;
    int n1,n2,n3,n4;
    printf("Enter four numbers: ");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);

    if (n1>0)
    {
        positive +=1;
    }
    else if (n2>0)
    {
        positive +=1;
    }

    else if(n3>0)
    {
        positive +=1;
    }
    else if (n4>0)
    {
        positive+=1;
    }
    printf("%d",positive);
    return 0;

}
