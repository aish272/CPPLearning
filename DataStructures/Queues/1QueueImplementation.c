#include<stdio.h>

#define size 5

int queue1 [size];
int front, rear;
front=-1;
rear = -1;
void enqueue(int value)
{
    if(rear-1==size)
    {
        printf("Queue is full.\n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        queue1[++rear]=value;
        printf("%d was enqueued.\n",value );
        
    }
}

void dequeue()
{
    if(front==-1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Dequeued %d.\n",queue1[front]);
        front++;
        if(rear<front)
            rear=front=-1;
    }
}

void display()
{
    if(front==-1)
    {
        return;
    }

    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d\n",queue1[i]);
    }
}

int main(void)
{
    enqueue(4);
    enqueue(8);
    enqueue(0);
    enqueue(7);
    dequeue();
    display();
    
    return 0;
}