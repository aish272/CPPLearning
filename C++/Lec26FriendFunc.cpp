#include<iostream>
using namespace std;

class complex 
{
    int a, b;

    public:
    void setnumber(int var1, int var2)
    {
         a = var1;
         b = var2;
    }
    friend complex setbysum (complex o1, complex o2);
    void print()
    {
        cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex setbysum(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(void)
{
    complex o1, o2, o3;
    o1.setnumber(6,2);
    o2.setnumber(2,3);
    o3 = setbysum(o1,o2);
    o1.print();
    o2.print();
    o3.print();
    return 0;
}