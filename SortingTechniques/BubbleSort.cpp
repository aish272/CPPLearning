#include <iostream>
using namespace std; 

void bubsort(int* arr,int size)
{
    size = size-1;  //beacuse counting starts from 0.
    

    //pass<size because we have to do 1 less pass than the array size. Comparision is done between two elements, so pass is 1 less than size.

    for(int pass=0;pass<(size);pass++)  
    {
        int flag = 0;  //to check if any swapping has happened or not.
        
        //swapItr<(size-pass). We have used this because everytime we execute this loop, we'll have to do one less swapping. Because with each swap one element bubbles up and settles at its position. In the first pass the largest element will bubble up and settle at the last position. Similarly in the second swap, the largest element will settle at the last second position.

        for(int swapItr = 0;swapItr<(size-pass);swapItr++)
        {
            if(arr[swapItr]>arr[swapItr+1])
            {
                int temp = arr[swapItr];
                arr[swapItr]= arr[swapItr+1];
                arr[swapItr+1] = temp;
                 flag = 1;          //if swapping occurrs then it will be changed to 1.
            }
        }

        if(flag==0)   // if there is no swapping then we'll come out of the outer for loop.
            break;
    }
}
int main(void)
{
    int arr[] = {34,9,4,23,99,56};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubsort(arr,size);
    for(int count=0;count<size;count++)
    {
        cout<<arr[count]<<endl;
    }
    return 0;
}