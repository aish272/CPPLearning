#include<iostream>
using namespace std;
class Number
{
    int a;
    public:
    Number()
    {}
    Number (int val1)
    {
        a = val1;
    }
    Number (Number &original)
    {
        a = original.a;
        cout<<"Contents have been copied."<<endl;
    }

    void show(void)
    {
        cout<<"The value is "<<a<<endl;
    }
};
int main(void)
{
    Number x(8), copy0; //default constructor is compulsory for copy0

    //Different ways to call a copy constructor 
    
    Number copy1 = x; //copy constructor will be called
    Number copy2(x); //copy consturctor will be called
    
    copy0 = x; //assignment operator will be called
    x.show();
    copy0.show();
    copy1.show();
    //Number copy3 = Number (x);
    copy2.show();


    return 0;
}