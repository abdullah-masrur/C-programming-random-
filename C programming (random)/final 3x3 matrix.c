#include<stdio.h>
int main()
{
  int a[2][2];
  int i,j;

  printf("elements : ");

  for(i=0;i<2;i++)
  {
      for (j=0;j<2;j++)
      {
          scanf("%d",&a[i][j]);
      }
  }
for(i=0;i<2;i++)
  {
      for (j=0;j<2;j++)
      {
          printf("%d\t",a[i][j]);
      }
        printf("\n\n");
  }

}
