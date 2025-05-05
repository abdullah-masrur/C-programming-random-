#include<stdio.h>
int prime();

int main()
{
    int num;
    printf("Enter a number :");

    prime();

}
int prime(int num)
{
    scanf("%d",&num);
    if (num%num==0)
    {
        printf("This is a prime number");
    }
    else printf("This isnt a prime number");
}
