#include <iostream>
using namespace std; 
int fibo(int n)
{
    if(n<=1)
    {
        return n;    //0, 1, 1, 2, 3, 5. Starts at 0th position.
    }

    else
    {
        return fibo(n-1) + fibo(n-2);
    }

     
}
int main(void)
{
    int position;
    position = 7;
    int elementAtPos = fibo(position);
    cout<<elementAtPos<<endl;
    return 0;
}