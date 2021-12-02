#include<iostream>
using namespace std;

class child
{
    int age;
    float height;

    public:
    void setdata()
    {
        cout<<"Enter the age and heignt of the child."<<endl;
        cin>>age>>height;
    }

    void print()
    {
        cout<<"The age is "<<age<<" and height is "<<height<<endl;
    }
};
int main(void)
{
    child playgroup[5] ;   //array of objects
    for(int i = 0;i<5;i++)
    {
        playgroup[i].setdata();
        playgroup[i].print();
    }

    return 0;
}