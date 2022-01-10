#include<iostream>
using namespace std;
int fact(int n)
{
    if (n<=1)
    {
        return 1;
    }
    else if (n==2)
    {
        return 2;
    }
    else
    {
        return n*fact(n-1); 
    }

}

int fibo(int n)
{
    if(n<=2)
    {
        return 1;
    }
    return fibo(n-2) + fibo(n-1);
}

int fiboiter(int n)
{
    int a =1, b=1;
    int temp;
    if (n<=2)
    {
        return 1;
    }
    else
    {
        n= n-2;
        while((n)>=1)
        {
            temp = b;
            b = a+b;
            a= temp;
            n-=1;
        }
        return b;
     }
}

int main(void)
{
    int n;
    cout<<"Enter the sequence of a number from the Fibonacci series and to find the factorial."<<endl;
    cin>>n;
    cout<<"The "<<n<<"th term from the Fibonacci series is "<<fibo(n)<<endl;
    cout<<"The "<<n<<"th term from the Fibonacci series using iterative method is "<<fiboiter(n)<<endl;


    cout<<"The factorial of "<<n<<" using recursive function is "<<fact(n)<<endl;
    
}