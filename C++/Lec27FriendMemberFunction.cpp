//Member function of class1 is a friend of another class2. 


#include<iostream>
using namespace std;

//Forward Declaration

class complex; 
//to inform the compiler that complex class exists before it reads complex in addrealpart func.

class calc
{
    public:  

    int addrealpart(complex o1, complex o2);
    
    //cannot define it here. Because the defination contains a,b and the compiler hasn't read complex class yet. It will require to read it first to be sure that a, b exist. Such a pain!!!
    
};

class complex
{
    int a,b;

    public:
    void setnumber(int var1, int var2)
    {
        a = var1;
        b = var2;
    }
    friend int calc:: addrealpart (complex,complex);
    void print()
    {
        cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;

    }

};

int calc :: addrealpart(complex o1, complex o2)
    {
        return o1.a+o2.a;
    }


int main(void)
{
    complex o1, o2;
    o1.setnumber(6,7);
    o1.print();
    o2.setnumber(7,8);
    o2.print();
    calc o3; //We'll to make an object to run the func even if it does not contain any properties.
    int result = o3.addrealpart(o1,o2);
    cout<<"The result is "<<result<<endl;
    return 0;
}