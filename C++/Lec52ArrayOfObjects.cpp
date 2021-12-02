#include<iostream>
using namespace std;

class NormalType
{
    int id, price;
    public:
    void setget(int a, int b)
    {
        id = a;
        price = b;
        cout<<"The id of the item is "<<id<<" and the price is "<<price<<endl;
    }
};
int main(void)
{
    int size = 3;
    NormalType* arr = new NormalType[size];
    int p1, i1;
    NormalType* ptr = arr;
    for(int i = 0;i<size;i++)
    {
        cout<<"Enter the id and the price of the item."<<endl;
        cin>>i1>>p1;
        ptr->setget(i1,p1);
        
    }

    
    return 0;
}