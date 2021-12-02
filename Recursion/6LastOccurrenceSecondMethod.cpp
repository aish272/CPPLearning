#include <iostream>
using namespace std;

int lastoccurrence(int* arr,int itr, int size, int val, int index)
{
    if(itr==size||index!=0)
    {
       if(index!=0)
        return index;
       return -1;
    }

     //traversing the list in reverse order. It can also be used to print the list in reverse order. After finding the first occurrence the execution will stop; as we are traversing the list in the reverse order and we want the last occurrence.


    if(arr[size-1-itr]==val)
    {
        index = size-itr;
    }
    lastoccurrence(arr,++itr,size,val,index);

}

int main(void)
{
    int array[] = {2,8,9,9,5,68,56,9,0,9};
    int index;
    int size = sizeof(array)/sizeof(array[0]);
    index = lastoccurrence(array,0,size,9,0);
    cout<<"Element's last occurrence is at index "<<index<<endl;
    return 0;
    return 0;
}
