#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    complex(int x, int y) //parameterized constructor takes no parameters.
    {
        a = x;
        b = y;

    }  

    void print()
    {
        cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;

    }
};
int main(void)
{
    complex a(8,8); //implicit call
    complex b = complex(9,0); //explicit call
    //complex c; this will generate error because we must pass arguments while creating c. As there is just one constructor which will be used for all objects and it takes arguments.
    a.print();
    b.print();
    return 0;
}