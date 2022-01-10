#include<iostream>
using namespace std;

class complex
{
    int a,b;
    public:
    complex(void);  //default constructor takes no parameters.

    void print()
    {
        cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;

    }
};

complex :: complex(void)
{
    a = 7;
    b = 9;
}
int main(void)
{
    complex o1, o2;
    o1.print();
    o2.print();
    return 0;
}