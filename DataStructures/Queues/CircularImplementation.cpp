#include <iostream>
using namespace std; 
class queue
{
    int front, rear;
    int* arr;
    int maxCap;
    public:
    queue(int size)
    {
        front = rear = -1;
        arr = new int[size];
        maxCap = size;
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
    rear = (rear+1)%(maxCap);
    arr[rear] = val;
    printf("%d enqueue at position %d.\n",val,rear);
}
void queue :: dequeue()
{
     if(empty())
        return;
    
    printf("%d dequeued.",arr[front]);

    if(rear==front)
        rear=front=-1;
    else
        front = (front+1)%maxCap;

    printf("Front is at position %d.\n",front);
}
bool queue :: full()
{
    return (front==0&&rear==maxCap-1)||(front==rear+1);
}
bool queue :: empty()
{
    return (rear==-1);
}

void queue :: display()
{
    if(empty())
    {
        cout<<"Queue is empty. There is nothing to print."<<endl;
        return;
    }
    int i = front;
    while(i!=rear)
    {
        cout<<"Val "<<arr[i]<<endl;
        i = (i+1)%maxCap;

    }
    cout<<"Val "<<arr[i]<<endl; //for printing the value at the end or which at index equal to rear.
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