#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int front, rear;
    int* arr;
    int size;

    
};

struct queue* createqueue(int size1)
{
    struct queue* myqueue = (struct queue* )malloc(sizeof(struct queue));
    myqueue->size = size1;
    myqueue->rear = -1;
    myqueue->front = -1;
    myqueue->arr  = (int)malloc(size1*sizeof(int));
    return myqueue;
}

void enqueue(int val, struct queue* myqueue)
{
    if(full(myqueue))
        return;
    if(myqueue->front==-1)
        myqueue->front++;
    myqueue->rear++;
    myqueue->arr[myqueue->rear] = val;
    printf("%d enqueued.\n",val);

}

void dequeue(struct queue* myqueue)
{
    if(empty(myqueue))
        return;
    printf("%d dequeued.\n",myqueue->arr[myqueue->front]);
    myqueue->front++;
    if(myqueue->front>myqueue->rear)
        myqueue->front=myqueue->rear=-1;
    
}

int full(struct queue* myqueue)
{
    return myqueue->rear == myqueue->size-1;

}
int empty(struct queue* myqueue)
{
    return myqueue->front == -1;

}
int main(void)

{
    struct queue* q1 = createqueue(8);
    enqueue(3,q1);
    enqueue(4,q1);
    enqueue(8,q1);
    enqueue(9,q1);
    dequeue(q1);
    

}

