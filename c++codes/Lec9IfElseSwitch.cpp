#include<iostream>
using namespace std;
int main(void)
{
    int age;
    cout<<"Enter ya age: ";
    cin>>age;
    if (age>=18)
    {
        cout<<"You can come around!\n";
    }
    else if (age<0)
    {
        cout<<"Stop fooling around!\n";
    }
    else
    {
        cout<<"Go back home kid.\n";//0<=age>18
    }

    //Switch Case

    switch(age)
    {
        case 18:
        cout<<"Hello there 18";
        break;  //if we do not put break then all the test cases after the matched test cases will run. Execution will only stop if there is break in the subsequent case.
        case 19:
        cout<<"Hello 19";
        break;
        default:
        cout<<"Default has been executed."; //default is not compulsory
        //there is no need to put break after the last case.
    }
}