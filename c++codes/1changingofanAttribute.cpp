// Program is checking if the value of an attribute can be changed or not if it has already been set in the class.

#include <iostream>
using namespace std;
class sample
{
    public:
    int i =10; //setting the value of i;
    void print()
    {
        cout<<i<<endl;
    }
};
int main(void)
{

    sample s;
    s.i =9;  // changing it.
    s.print();// 9 will be printed. If we comment line 18 then 10 will be printed. 
    return 0;
}
