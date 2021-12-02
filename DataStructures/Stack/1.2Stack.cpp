#include<stack>
#include<iostream>
using namespace std;
int main(void)
{
    stack<int> s;
    s.push(9);
    s.push(8);
    s.push(9);
    s.push(0);
    cout<<"The size of the stack is "<<s.size()<<endl;
    s.pop(); //returns void
    cout<<"The size of the stack is "<<s.size()<<endl;
    cout<<"Is stack empty: "<<s.empty()<<endl;
    cout<<"The topmost element "<<s.top()<<endl; //s.top() won't return index in stl.


}   