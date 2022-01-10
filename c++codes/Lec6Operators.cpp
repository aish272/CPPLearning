#include<iostream>
using namespace std;
int a =90;
int main (void)

{
    int a=10, b=15;
    cout<<"Arithmetic Operators\n";
    cout<<"a+b  "<<a+b<<"\n";
    cout<<"a-b  "  <<a-b<<"\n";
    cout<<"a*b  "<<a*b<<"\n";
    cout<<"a/b  "<<a/b<<"\n";

    cout<<"a++  "<<a++<<"\n";
    cout<<"--a  "<<a--<<"\n";
    cout<<"++a  "<<++a<<"\n";
    cout<<"a--  "<<a--<<"\n";
    cout<<"a  "<<a<<"\n";

    cout<<"Relational Operators"<<"\n";

    cout<<"a<b  "<<(a<b)<<"\n";
    cout<<"a>b  "<<(a>b)<<"\n";
    cout<<"a<=b  "<<(a<=b)<<"\n";
    cout<<"a>=b  "<<(a>=b)<<"\n";
    cout<<"a==b  "<<(a==b)<<"\n";
    cout<<"a!=b  "<<(a!=b)<<"\n";

    cout<<"Logical Operators"<<"\n";

    cout<<"a&&b  "<<(a&&b)<<"\n";
    cout<<"a||b  "<<(a||b)<<"\n";
    cout<<"!a  "<<(!a)<<"\n";
    cout<<"Global a is  "<<::a;
    


    return 0;

}
