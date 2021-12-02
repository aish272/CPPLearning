#include <iostream>
using namespace std; 

long double power(float base, float pw)
{
    if(pw<0)
    {
        return 1/base * power(base,pw+1); //dividing the base(1/2) and increasing negative power to reach 0; then will return 1.
    }
    else if(pw>0)
    {
        return base * power(base,pw-1); //multiplying the base(2*1) and decreasing positive power to reach 0; then will return 1 
    }
    else 
        return 1; //the terminating condition. Function will return 1 in both negative and positive powers because multiplying by 1 leaves no effect.

}

int main(void)
{
    long double res = power(2,-3); //for negative power. output  = .125
    cout<<res<<endl; 
    res = power(2,3);
    cout<<res<<endl;
    return 0;
}