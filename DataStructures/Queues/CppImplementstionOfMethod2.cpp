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
        arr = new int [size];
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
    rear++;
    arr[rear] = val;
    cout<<val<<" enqueued.\n";


}
void queue :: dequeue()
{
    if(empty())
        return;
    cout<<arr[front]<<" dequeued.\n";
    front++;
    if(front>rear)
        front=rear=-1;
}
bool queue :: full()
{
    return rear == maxCap-1;

}
bool queue :: empty()
{
    return front == -1;

}
void queue :: display()
{
    int i=front;
    for(;i<=rear;i++)
    {
        cout<<arr[i]<<endl;
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
    
    HumraPehlaQueue.display();
    
    return 0;
}