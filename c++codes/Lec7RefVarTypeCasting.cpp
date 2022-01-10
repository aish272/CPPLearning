#include <iostream>
using namespace std;
int main(void)
{
    cout<<"sizeof(4.5)  "<<sizeof(4.5)<<"\n"; //the tyoe is by default double so 8 will be printed
    cout<<"sizeof(4.5f)  "<<sizeof(4.5f)<<"\n";
    cout<<"sizeof(4.5F)  "<<sizeof(4.5F)<<"\n";
    cout<<"sizeof(4.5l)  "<<sizeof(4.5l)<<"\n";
    cout<<"sizeof(4.5L)  "<<sizeof(4.5L)<<"\n";

    // reference variable

    int x = 9;
    int &y = x;
    cout<<"y = "<<y<<endl;
    return 0;


}