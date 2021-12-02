#include <iostream>
#include<vector>
using namespace std; 
struct Stack

{
   vector<int> vect;

   void push(int val)
   {
       vect.push_back(val);
       cout<<val<<" pushed in the stack."<<endl;
   }
   int pop(void)
   {
       if(isEmpty())
       {
           return INT64_MIN;
       }
       int temp = vect.back();
       vect.pop_back();
       return temp;
   }
   bool isEmpty()
   {
       return vect.empty();
   }
   int peek(void)
   {
       if(isEmpty())
       {
           return INT64_MIN;
       }  
       return  vect.back();

   }
   int size()
   {
       return vect.size();
   }
   void display()
   {
       vector<int>::iterator it;
       for(it = vect.end()-1;it>=vect.begin();it--)
       {
           cout<<*it<<"";
       }
   }

};


int main(void)
{
    Stack s1;
    cout << s1.isEmpty() << endl;

    
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    cout << "Element on top is "<<s1.peek() << endl;

    cout << "Popped outelement is " << s1.pop() << endl;
    s1.display();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    cout<<s1.size()<<endl;
    cout << s1.isEmpty() << endl;


    return 0;
}