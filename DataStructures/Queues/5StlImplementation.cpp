#include <iostream>
#include<queue>
using namespace std; 
//Amortization: when a new queue has to be created because the size of queue allocated for array is full and we need to enter one more element. The time complexity for enqueuing is always o(1) in stl.
int main(void)
{
    queue <int> q1;
    q1.push(8);
    q1.push(890);
    q1.push(86);
    q1.push(4);
    q1.push(3);
    cout<<"The size is "<<q1.size()<<endl;
    cout<<"Front "<<q1.front()<<endl;
    cout<<"Rear "<<q1.back()<<endl;
    q1.pop();
    while(!q1.empty())
    {
        cout<<q1.front()<<endl;
        q1.pop();
    }

    return 0;
}