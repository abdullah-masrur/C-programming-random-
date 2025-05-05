#include<stdio.h>
int main()
{
    int i,j,sum;
    printf("enter elements:");
    int a[3][3];

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
            sum = sum+a[i][j];
        }
        printf("\n");

    }
    printf("%d",sum);

}
