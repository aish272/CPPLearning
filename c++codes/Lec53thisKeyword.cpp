#include<iostream>
using namespace std;
class thistest
{
    int a, b;
    public:
    thistest & setdata(int a, int b)
    {
    this->a = a;
    this->b = b; 
    return *this;
    }
    void getdata()
    {
        cout<<"The values are "<<a<<" and "<<b<<endl;
    }
};
int main(void)
{
    thistest t1;
    t1.setdata(9,8).getdata();

    return 0;
}