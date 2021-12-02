//Parameterized Constructor Example
#include<iostream>
#include<math.h>
using namespace std;

class point
{
    int x, y;
    public:
    friend void dist (point obj1, point obj2);
    point (int val1, int val2)
    {
        x = val1;
        y = val2;
    }
};

void dist (point obj1, point obj2)
{
    float res = sqrt (pow ( (obj2.x-obj1.x),2 ) + (pow ( (obj2.y-obj1.y),2) ));
    cout<<"The distance between two points is "<<res<<endl;
}
int main(void)
{
    point p1(2,3);
    point p2(5,6);
    dist(p1,p2);
    return 0;
}