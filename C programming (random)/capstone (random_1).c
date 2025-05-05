#include<stdio.h>
int main()
{


    int add = sum();
    printf("%d\n",add);

    int min = sub();
    printf("%d\n",min);

    int dev = div();
    printf("%f\n",dev);

    int multi = mul();
    printf("%d\n",multi);

}

//addition
int sum(int a,int b){
    printf("Enter two numbers to add : ");
    scanf("%d%d",&a,&b);
    int c=a+b;

    return c;
}

//subtraction
int sub(int a,int b){
    printf("Enter two numbers to subtract : ");
    scanf("%d%d",&a,&b);
    int c=a-b;

    return c;
}

//division
int div(int a,int b){
    printf("Enter two numbers to devide : ");
    scanf("%d%d",&a,&b);
    int c=a/b;

    return c;
}


//multiplication
int mul(int a,int b){
    printf("Enter two numbers to multiply : ");
    scanf("%d%d",&a,&b);
    int c=a*b;

    return c;
}
