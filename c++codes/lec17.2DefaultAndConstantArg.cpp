#include<iostream>
using namespace std;
int main(void)
{
    int money = 1000;
    float moneyreceived(int money, float rate = 1.04);
    cout<<"Money received by commoner on the amount "<<money<<" is "<<moneyreceived(money)<<endl;
    cout<<"Money received by vip on the amount "<<money<<" is "<<moneyreceived(money, 1.1)<<endl;

    return 0;
}

float moneyreceived(int money, float rate = 1.04) //default is always declared after formal
{
    return money*rate;
}

//int strlen(const char* p) //so that nothing can change the value of p