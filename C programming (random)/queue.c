#include<stdio.h>
#define MAX  4

int rear=-1;
int front =-1;
int queue_array[MAX];

void insert();
void delete();
void display();

int main(){
int choice;
while(1){
    printf("1 for enqueue\n");
    printf("2 for dequeue\n");
    printf("3 for display\n");
    printf("4 for quit\n");
    printf("Enter yoour choice: ");
    scanf("%d",&choice);

    switch(choice){
case 1:
    insert();
    break;
case 2:
    delete();
    break;
case 3:
    display();
    break;
case 4:
    exit(0);
default:
    printf("Wrong input.........\n");
    }
}
return 0;
}

void insert(){
    int add;
    if(rear == MAX-1){
        printf("overflow\n");
    }else{
    if(front ==-1){
        front =0;
    }
    printf("enter element:");
    scanf("%d",&add);
    rear = rear +1;
    queue_array[rear] = add;
    printf("Element inserted......\n");
    }
}

void delete(){
    if(front ==-1 || front>rear){
        printf("Overflow.......\n");
    }else{printf("Element deleted from the queue is: %d\n",queue_array[front]);
    front = front +1;
    if(front>rear){
        front = rear = -1;
        }
    }
}


void display(){
    int i;
    if(front==-1)
    {
        printf("Queue is empty.......\n");
    }else{
    printf("queue elements are: \n");
    for(int i =front; i<=rear; i++){
        printf("%d",queue_array[i]);
        }
    }
    printf("\n");
}





