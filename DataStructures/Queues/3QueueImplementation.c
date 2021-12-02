#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int front, rear;
    int* arr;
    int maxCap;
    int currentsize;


};

struct queue* createqueue(int size1)
{
    struct queue* myqueue = (struct queue* )malloc(sizeof(struct queue));
    myqueue->maxCap = size1;
    myqueue->rear = myqueue->maxCap-1; //rear will be pointing at the last location and when we will add the first element it will become 0 using the formula in enqueue.
    myqueue->front = -1;
    myqueue->currentsize = 0;
    myqueue->arr  = (int)malloc(size1*sizeof(int));
    return myqueue;
}

void enqueue(int val, struct queue* myqueue)
{
    if(full(myqueue))
        return;
    if(myqueue->front==-1)
        myqueue->front++;
    myqueue->currentsize++;
    myqueue->rear = (myqueue->rear+1)%(myqueue->maxCap);
    myqueue->arr[myqueue->rear] = val;
    printf("%d enqueue at position %d.\n",val,myqueue->rear);

}

void dequeue(struct queue* myqueue)
{
    if(empty(myqueue))
        return;
    myqueue->currentsize--;
    printf("%d dequeued.",myqueue->arr[myqueue->front]);
    myqueue->front = (myqueue->front+1)%myqueue->maxCap;
    printf("Front is at position %d.\n",myqueue->front);

}

int full(struct queue* myqueue)
{
    return myqueue->currentsize == myqueue->maxCap;

}
int empty(struct queue* myqueue)
{
    return myqueue->currentsize == 0;

}

void display(struct queue* myqueue)
{
    int j;
    int i =myqueue->front;
    for(j=0;j<=myqueue->currentsize-1;j++)
    {
        printf("Value is %d.\n",myqueue->arr[i]);
        i = (i+1)%(myqueue->maxCap);
        
    }
}
int main(void)

{
    struct queue* q1 = createqueue(5);
    enqueue(3,q1);
    enqueue(4,q1);
    enqueue(8,q1);
    enqueue(9,q1);
    enqueue(10,q1);
    dequeue(q1);
    dequeue(q1);
    enqueue(996,q1);
    enqueue(106,q1);
    display(q1);



}
