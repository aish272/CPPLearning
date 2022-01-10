#include<iostream>
using namespace std;

class point
{
    int x,y;
    public:
    point(int val1, int val2)
    {
        x = val1;
        y = val2;
    }

    point(int val1)
    {
        x = val1;
        y = 0;
    }

    point(void)
    {
        x = 0;
        y = 0;
    }

    void print(void)
    {
        cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
    }
};
int main(void)
{
    point p1(4,5);
    point p2(9);
    point p3;
    p1.print();
    p2.print();
    p3.print();
    return 0;
}