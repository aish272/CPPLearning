#include<iostream>
using namespace std;
class justnormal
{
    int a;
    public:
    void getset(int a1)
    {
        a = a1;
        cout<<"The value of a is "<<a<<endl;
    }
};
int main(void)
{
    justnormal j1;
    // 2 ways to dynamically allocate memory to an object.
    justnormal* ptr = &j1; 
    justnormal* pt = new justnormal;

    // two ways to access methods

    //. operator
    (*ptr).getset(7); //put parentheses outside *ptr because the priority of . operator is greater than *.

    //arrow operator
    pt->getset(8);

    return 0;
}