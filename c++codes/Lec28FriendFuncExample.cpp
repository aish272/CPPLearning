#include<iostream>
using namespace std;

class sameAsfirst; // Forward declararation method rule

class first
{
    int x;
    friend void sum(first, sameAsfirst); //compiler won't recognise sameAsfirst.
    public :
    void setdata(int value)
    {
        x = value;
    }
};
class sameAsfirst
{
    int y;
    friend void sum(first, sameAsfirst);
    public :
    void setdata(int value)
    {
        y = value;
    }
};

void sum(first a, sameAsfirst b)
{
    cout<<"The sum is "<<a.x+b.y;
}
int main(void)
{
    first a;
    sameAsfirst b;
    a.setdata(5);
    b.setdata(6);
    sum(a,b);
    return 0;
}