#include<iostream>
using namespace std;
inline int prod(int x , int y);
int main(void)
{
    int x,y;

    cin>>x>>y;

    cout<<"x*y = "<<prod(x,y)<<endl;
    cout<<"x*y = "<<prod(x,y)<<endl;
    cout<<"x*y = "<<prod(x,y)<<endl;
    cout<<"x*y = "<<prod(x,y)<<endl;
    cout<<"x*y = "<<prod(x,y)<<endl;
    cout<<"x*y = "<<prod(x,y)<<endl;
    return 0;
}

inline int prod(int x, int y)
{
    return x*y;
}
