#include <iostream>
using namespace std;
int findindex(int*arr,int i,int size,int val)
{
    if(i==size)
    {
        cout<<"Not Found. -1 returned."<<endl;
        return -1;
    }

    else
    {
        if(arr[i]==val)
        {
            return i+1;
        }
        else
        {
            findindex(arr,++i,size,val);
        }
    }
}
int main(void)
{
    int array[] = {2,8,9,9,5,68,56,0};
    int index;
    index = findindex(array,0,8,686);
    cout<<"Index is "<<index<<endl;
    return 0;
}
