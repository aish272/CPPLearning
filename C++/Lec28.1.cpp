#include<iostream>
using namespace std;
class sameAsfirst; // Forward declararation method rule

class first
{
    int x;
    friend void exchange(first & obj1, sameAsfirst &obj2); //compiler won't recognise sameAsfirst.
    public :
    void setdata(int value)
    {
        x = value;
    }
    void display()
    {
        cout<<x<<endl;
    }
};
class sameAsfirst
{
    int y;
    friend void exchange(first &obj1, sameAsfirst &obj2);
    public :
    void setdata(int value)
    {
        y = value;
    }
    void display()
    {
        cout<<y<<endl;
    }
};

void exchange(first &obj1,sameAsfirst &obj2)
{
    int temp = obj1.x;
    obj1.x = obj2.y;
    obj2.y = temp;
}
int main(void)
{
    first o1;
    sameAsfirst o2;
    o1.setdata(90);
    o2.setdata(77);
    cout<<"The value of o1 ";
    o1.display(); 
    cout<<"The value of o2 ";
    o2.display();

    exchange(o1,o2);
    
    cout<<"The value of o1 ";
    o1.display(); 
    cout<<"The value of o2 ";
    o2.display();
    return 0;
}