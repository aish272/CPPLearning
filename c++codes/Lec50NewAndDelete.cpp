#include<iostream>
using namespace std;
int main(void)
{
    int* a = new int(30); //new is used to dynamically allocate memory
    cout<<"The value of a is "<<*a<<endl;
    int* arr = new int[5];
    arr[0]= 1;
    arr[1]= 1;
    arr[2]= 1;
    arr[3]= 1;
    arr[4]= 1;
    for(int i = 0;i<5;i++)
    {
    cout<<"The element "<<i+1<<" is "<<arr[i]<<endl;
    }
    delete a;
    delete[] arr; // to delete the entire block of memory. 
    return 0;
}