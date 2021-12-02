#include <iostream>
using namespace std;
int findlastindex(int*arr,int i,int size,int val,int lastfoundat)
{
    if(i==size)
    {
        if (lastfoundat!=0)
            return lastfoundat;

        return -1;
    
    }

    else
    {
       
        if(arr[i]==val)
        {
            lastfoundat =  i+1;
            
        }
        findlastindex(arr,++i,size,val,lastfoundat);

        
    }
}
int main(void)
{
    int array[] = {2,8,9,9,5,68,56,9,0,9};
    int index;
    int size = sizeof(array)/sizeof(array[0]);
    index = findlastindex(array,0,size,9,0);
    cout<<"Element's last occurrence is at index "<<index<<endl;
    return 0;
}
