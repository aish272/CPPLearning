#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
    cout<<setw(7)<<78<<endl;
    const int a=0;
    //a =9; this will produce an error because we are trying to change the value of a.
    return 0;
}