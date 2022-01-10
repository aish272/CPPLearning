#include<iostream>
using namespace std;

class complex
{
    int a, b;
    
    public:

    void setdata(int var1, int var2)
    {
        a = var1;
        b = var2;
    }

    void setbysum(complex c1, complex c2)
    {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }

    void print()
    {
        cout<<"Complex Number = "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main(void)
{
    complex c1, c2, c3;
    c1.setdata(7,8);
    c1.print();
    c3.setdata(1,1);
    c3.print();
    c2.setbysum(c1,c3);
    c2.print();
    

    return 0;
}