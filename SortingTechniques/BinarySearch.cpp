#include <iostream>
using namespace std;

int binarysearch(int*arr,int left,int right,int val)
{
    int mid;
    if(left<=right)
    {
        mid = (left+right)/2;
        if(arr[mid]==val)
            return mid+1;
        else if(arr[mid]>val)
            binarysearch(arr,left,mid-1,val);
        else
            binarysearch(arr,mid+1,right,val);

    }
    else
        return -1;
}
int main(void)
{
    int arr[] = {1,2,3,67,89,90,100};
    int index = binarysearch(arr,0,6,899);
    cout<<index<<endl;
    return 0;
}
