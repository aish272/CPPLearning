#include <iostream>
using namespace std; 

void reverseprint(int* arr, int size, int itr)
{
    if(itr==size)
    {
        return;
    }
    cout<<arr[size-1-itr]<<endl; //traversing in reverse order.
    
    reverseprint(arr,size,++itr);
}

void reverseprint2(int* arr, int size, int itr1)
{
    if(itr1==size)
    {
        return;
    } 
    reverseprint2(arr,size,++itr1);
    
    cout<<arr[itr1-1]<<endl; 
    
    
    
    //call for the last function will execute first. Then the second last function will be called. The last one to be executed will bw the one called first.

    //cout<<arr[size-1-itr]<<endl;// if thisaws used then list would have been printed in iys original order.
}


int main(void)
{
    int arrayji[] = {1,2,3};
    int arr[]     = {4,5,6};
    int size = sizeof(arrayji)/sizeof(arrayji[0]);
    cout<<"Using First Method: "<<endl;
    reverseprint(arrayji,size,0);
    cout<<"Using Second Method: "<<endl;
    reverseprint2(arr,3,0);
    return 0;
}