#include<iostream>
using namespace std;

class test1
{
    int a;
    int b; //write them in the order in which you want to access them.

    public:
    test1(int x, int y): a(x),b(y)
    {
        cout<<"first constructor ran."<<endl;
        cout<<"Value of the two variables are: "<<a<<", "<<b<<endl;
    }
};

class test2
{
    int a;
    int b; //write them in the order in which you want to access them.

    public:
    test2(int x, int y): a(x),b(y+a) 

    //this is possible because a is already initialised. 
    //But, test2(int x, int y): b(y),a(x+b) is wrong because a will get initialised first.
    // So, if you try to print the value of a, garbage value will be printed on the screen

    {
        cout<<"Second constructor ran."<<endl;
        cout<<"Value of the two variables are: "<<a<<", "<<b<<endl;
    }
};


int main(void)
{
    test1 t1(8,9);
    test2 t2(6,7);
    return 0;
}