#include<iostream>
using namespace std;
class point
{
    int x,y;
    public:
    point(int val1, int val2=1) // default value of y is 1 now.
    {
        x = val1;
        y = val2;
    }

    void print(void)
    {
        cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
    }
};
int main(void)
{
    point p1(9,8);
    point p2(9); //no value was given for p2 so default value will be taken.
    p1.print();
    p2.print();
    
    return 0;
}