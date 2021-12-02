#include<iostream>
using namespace std;

class base
{
    int a;
    protected:
    int b;
    public:
    base ()
    {
        a = 77;
        b = 90;
    }
    void show()
    {
     cout<<"value of protected variable in base class "<<b<<endl;
    } 
    
};

class derived1 : protected base
{
    public:
    void show()
    {
     cout<<"value of protected variable in base class "<<b<<endl;
    } 
};
class derived2 : public base
{
    public:
    void show()
    {
     cout<<"value of protected variable in base class "<<b<<endl;
    } 
};
class derived3 :  private base 
{
    public:
    void show()
    {
     cout<<"value of protected variable in base class "<<b<<endl;
    } 
};
int main(void)
{
    derived1 d1;
    derived2 d2;
    derived3 d3;
    // cout<<"The value is "<<d1.b;  // error member is protected can't be accessed 
    // cout<<"The value is "<<d2.b;  // error member is protected can't be accessed 
    // cout<<"The value is "<<d3.b;   // error member is private can't be accessed 
    d1.show();
    d2.show();
    d3.show();
    base b;
    b.show();
    return 0;
}