#include <iostream>
using namespace std; 
void stockspan(int* arr, int size)
{
    for(int eachEle = 0;eachEle<size;eachEle++)
    {
        int currentspan = 1;
        for(int backItr = eachEle-1; (backItr>=0) && (arr[backItr] <= arr[eachEle]); backItr--)
        {
            currentspan++;
        }
        cout<<"For "<<arr[eachEle]<<" current stock span is "<<currentspan<<endl;

    }
}
int main(void)
{
    int arr1[] = {12,14,15,7,15,17,5,12,10,13,20};
    stockspan(arr1,11);
    return 0;
}