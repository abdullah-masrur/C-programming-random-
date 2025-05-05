#include<stdio.h>
int main(){
int array[]={2,5,9,78,88,9,4,6,1,11,15,19,18};
int size = sizeof(array)/sizeof(array[0]);
printf("%d",size);

printf("Enter a value to search: ");
int search;
scanf("%d",&search);

int flag = 0 ;

for(int i = 0; i<size; i++){
if(search == array[i]){
    flag++;
}
if(flag==0)
{
    printf(" value not found. ");
}
else{
    printf("Value found ");
}


}
}

