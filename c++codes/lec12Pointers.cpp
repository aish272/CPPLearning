#include<iostream>
using namespace std;
int main(void)
{
    int a =9;
    int*b =&a;
    int**c = &b;
    cout<<"**c = "<<**c;
    return 0;

}