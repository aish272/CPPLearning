#include <iostream>
using namespace std; 
class queue
{
    private:
    int front, rear;
    int* arr;
    int maxCap;
    int currentsize;
    public:
    queue(int size)
    {
        
        maxCap = size;
        rear =maxCap-1; //rear will be pointing at the last location and when we will add the first element it will become 0 using the formula in enqueue.
        front = -1;
        currentsize = 0;
        arr  = new int[size];

    }
    void enqueue(int val);
    void dequeue();
    bool full();
    bool empty();
    void display();

};
void queue :: enqueue(int val)
{
    if(full())
        return;
    if(front==-1)
        front++;
    currentsize++;
    rear = (rear+1)%(maxCap);
    arr[rear] = val;
    printf("%d enqueue at position %d.\n",val,rear);
}

void queue :: dequeue()
{
     if(empty())
        return;
    currentsize--;
    printf("%d dequeued.",arr[front]);
    front = (front+1)%maxCap;
    printf("Front is at position %d.\n",front);
}

bool queue :: full()
{
    return currentsize == maxCap;

}
bool queue :: empty()
{
    return currentsize == 0;

}

void queue :: display()
{
    int j;
    int i =front;
    for(j=0;j<=currentsize-1;j++)
    {
        printf("Value is %d.\n",arr[i]);
        i = (i+1)%(maxCap);
        
    }
}

int main(void)
{
    queue HumraPehlaQueue(5);
    HumraPehlaQueue.enqueue(3);
    HumraPehlaQueue.enqueue(4);
    HumraPehlaQueue.enqueue(8);
    HumraPehlaQueue.enqueue(9);
    HumraPehlaQueue.enqueue(10);
    HumraPehlaQueue.dequeue();
    HumraPehlaQueue.dequeue();
    HumraPehlaQueue.enqueue(996);
    HumraPehlaQueue.enqueue(106);
    HumraPehlaQueue.display();
    return 0;
}