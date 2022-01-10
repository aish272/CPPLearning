#include<iostream>
using namespace std;
int main(void)
{
    int random[6] = {1,2,3,4};
    int* p = random;
    cout<<"random[0]"<<random[0]<<endl;
    cout<<"random[1]"<<random[1]<<endl;
    cout<<"random[2]"<<random[2]<<endl;
    cout<<"random[3]"<<random[3]<<endl;
    cout<<"random[4]"<<random[4]<<endl;
    cout<<"random[5]"<<random[5]<<endl;

    //pointer arithmetic
    for(int i=0; i<4;i++)
    {
        cout<<*(p+i)<<endl;
    }
    cout<<"*(p++) = "<<*(p++)<<endl; //1 because post increment operator is used.
    cout<<"*(++p) = "<<*(++p)<<endl; //3 because pre increment operator is used.
    return 0;
}