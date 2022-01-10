#include<iostream>
#include<cmath>
using namespace std;

class simplecal
{
    protected:
    int a, b;
    public:
    void setdata1()
    {
        cout<<"Enter number 1: "<<endl;
        cin>>a;
        cout<<"Enter number 1: "<<endl;
        cin>>b;
    }
    void performop1()
    {
        cout<<"The sum is "<<a+b<<endl;
        cout<<"The subtraction is "<<a-b<<endl;
        cout<<"The product is "<<a*b<<endl;
        cout<<"The division is "<<a/b<<endl;

    }
};

class scientificcal
{
    protected:
    int a;
    public:
    void setdata2()
    {
        cout<<"Enter number 1: "<<endl;
        cin>>a;

    }
    void performop2()
    {
        cout<<"The sin is "<<sin(a)<<endl;
        cout<<"The cos is "<<cos(a)<<endl;
        cout<<"The exp is "<<exp(a)<<endl;
        cout<<"The tan is "<<tan(a)<<endl;

    }
};

class hybrid : public simplecal, public scientificcal
{
    public:
    void call_all()
    {
        setdata1();
        performop1();
        setdata2();
        performop2();
    }

};

int main()
{
     hybrid h1;
     h1.call_all();
     return 0;

}

