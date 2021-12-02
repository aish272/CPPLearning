#include<iostream>
using namespace std;
int main(void)
{
    for(int i =0;i<=10;i++)
    {
        cout<<i<<endl;
    }

    int j=1;
    while(j<7)
    {

        j++;
        cout<<j<<endl;
    }

    int x=1;
    do
    {
        cout<<x<<endl;
        x++;
    }while(8>9); //condition is false, loop will run only once.
    return 0;
}
