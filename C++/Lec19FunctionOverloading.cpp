#include<iostream>
using namespace std;
// In Function Overloading “Function” name should be the same and the arguments should be different. 
int vol(int r, int h)
{
    return r*3.14*h;
}

int vol(int l, int b, int h)
{
    return l*b*h;
}

int vol(int a)
{
    return a*a*a;
}
int main(void)
{
    cout<<"Volume of cube with side 5 "<<vol(5)<<endl;
    cout<<"Volume of cuboid with sides 5, 2 and 3 "<<vol(5,2,3)<<endl;
    cout<<"Volume of cylinder with radius 5.2 and height 9 "<<vol(5.2, 9)<<endl;

    return 0;
}