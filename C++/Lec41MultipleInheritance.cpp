#include<iostream>
using namespace std;
class base1
{
    protected:
    int x1;
    public:
    void getset1(int a)
    {
        x1 = a;
        cout<<"The value in base1 is "<<x1<<endl;
    }
};
class base2
{
    protected:
    int x2;
    public:
    void getset2(int a)   //can't have name as getset1. It will make it ambiguous. Will see this next lec43
    {
        x2 = a;
        cout<<"The value in base2 is "<<x2<<endl;
    }
};
class derived: public base1, public base2
{
    public:
     void add()
     {
         cout<<"The sum of values is "<<x1+x2<<endl;
     }
};
int main(void)
{
    derived d1;
    d1.getset1(5);
    d1.getset2(8);
    d1.add();
    return 0;
}