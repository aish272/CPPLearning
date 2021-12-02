#include <iostream>
using namespace std; 
void print(int* arr,int i,int size)
{
    if(i==size)
    {
        return;
    }

    else
    {
        cout<<arr[i]<<endl;
        print(arr,++i,size);//i++ was not working.
    }

}
int main(void)
{
    void print(int* arr,int i,int size);
    int array[] = {1,2,3,4,5};
    int startindex =0;
    int size = sizeof(array)/sizeof(array[0]);
    
    print(array,startindex,size);
    return 0;
}
