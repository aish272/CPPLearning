#include<iostream>
using namespace std;

class emp
{
    public:
    int id;
    int salary;
    emp (int a)
    {
        id = a;
        salary = 80000;
    }
    emp ()       //this is necessary for derived class object.
    {}
}; 
class  derivedfromemp : public emp
{
     public:
     int langknown;
     derivedfromemp(int a, int i)
     {
         langknown = a;
         id = i;                 //derived from base class
     }
     void show()
     {
         cout<<"The languages known by the programmer is "<<langknown<<" and id is "<<id<<"."<<endl;
     }
};
int main(void)
{
    derivedfromemp d1(4,10);
    //cout<<d1.id; if we try to do this without giving a value to id here or in the derived class then it will print garbage value.
    d1.show();

    
    return 0;
}