#include<iostream>
using namespace std;
class base
{
    public:
    int baseint;
    void display(void)
    {
        cout<<"The value of base class variable is "<<baseint<<endl;
    }

};

class derived : public base
{
    public:
    int derivedint;
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
    
    //members of base class can be accessed but derived class members cannot be.
    base_pointer->baseint = 999; 
    base_pointer->display();

    // the next line will throw an error 

    //base_pointer->derivedint = 99; 

    derived* derived_pointer  = &d_obj;

    //accessing derived class members using derived class type pointer which points to derived class


   
    derived_pointer->derivedint = 888;
     derived_pointer->display();
    derived_pointer->base::display();  //base class method accessed using scope resolution operator.




    return 0;
}