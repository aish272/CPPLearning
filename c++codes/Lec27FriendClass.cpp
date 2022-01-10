#include<iostream>
using namespace std;

// Friend Class 

class complex; 

class calc
{
    public:  

    int addrealpart(complex o1, complex o2);
    int addcomppart(complex o1, complex o2);
    
   
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
    
    friend class calc;

    // friend int calc:: addrealpart (complex, complex);         //no need for these
    // friend int calc:: addcomppart (complex, complex);

    void print()
    {
        cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;

    }

};

int calc :: addrealpart(complex o1, complex o2)
    {
        return o1.a+o2.a;
    }
int calc :: addcomppart(complex o1, complex o2)
    {
        return o1.b+o2.b;
    }


int main(void)
{
    complex o1, o2; 
    o1.setnumber(9,0);
    o1.print();
    o2.setnumber(8,7);
    o2.print();
    calc o3;
    int resultreal = o3.addrealpart(o1,o2);
    int resultcomp = o3.addcomppart(o1,o2);
    cout<<"The sum of real part is "<<resultreal<<" and complex part is "<<resultcomp<<"."<<endl;

    return 0;
}