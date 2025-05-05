#include<stdio.h>
int main(){
    int n,loop,a,b;
    scanf("%d",&n);
    loop = (2*n)-1;
    for(int i=1;i<=loop;i++){
        for(int j=1;j<=loop;j++){
            a = i, b = j;
            if(a>loop/2) a = loop-i+1;
            if(b>loop/2) b = loop-j+1;
            if(a<b){
                a = n-a+1;
                printf("%d ",a);
            }
            else {
                b = n-b+1;
                printf("%d ",b);
            }
        }
        printf("\n");
    }

    return 0;
}
