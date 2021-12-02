#include<iostream>
using namespace std;
int main(void)
{
    int x = 9, y = 0;

    void swapcallbyvalue (int*, int*);
    void swap_refvar(int& , int&); 
    int& return_refvar(int& x);

    swapcallbyvalue(&x, &y);
    cout<<"Value of x =  "<<x<<" and y =  "<<y<<" after swapping through call by value method."<<endl;

    swap_refvar (x, y);
    cout<<"Value of x =  "<<x<<" and y =  "<<y<<" after swapping by using reference variable method."<<endl;

    return_refvar(x) = 66; //66 will be assigned to x because swap_refvar(x) will be replaced by a which is a reference to x.
    cout<<"x = "<<x<<endl;

    return 0;
}

void swapcallbyvalue(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swap_refvar(int& x, int& y) 
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int& return_refvar(int& a) 
{
    return a;
}

