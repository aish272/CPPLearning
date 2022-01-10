#include<iostream>
using namespace std;

class base
{
    public:
    int baseint  = 7888;
    virtual void display(void)  //virtual keyword used. After this the child class function with the same name function will run.
    {
        cout<<"The value of base class variable is "<<baseint<<endl;
    }

};

class derived : public base
{
    public:
    int derivedint = 9;
    void display(void)
    {
        cout<<"The value of derived class variable is "<<derivedint<<endl;
        cout<<"The value of base class variable is "<<baseint<<endl;
    }

};

int main(void)
{
   
    base*  base_pointer; 
    derived d_obj;
    base_pointer = &d_obj; // pointer of base class stores the object of derived class.
    base_pointer->display(); //this time it will run the function of child class. 
    return 0;
}