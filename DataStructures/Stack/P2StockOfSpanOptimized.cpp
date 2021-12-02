#include <iostream>
#include<stack>
using namespace std; 

void stockspan(int* arr, int size)
{
    cout<<"Span of stock "<<arr[0]<<" is 1."<<endl;
    stack <int> s1;
    s1.push(0);
    int itr;
    for(itr = 1;itr<size;itr++)
    {
        while(s1.empty()==false && arr[s1.top()]<=arr[itr]) //s1.empty() is used to pop the elements as long as the array is not empty.
        {    
            s1.pop();
        }
        int currentspan;
        currentspan = s1.empty()?itr+1:itr-s1.top();
        cout<<"Span of stock "<<arr[itr]<<" is "<<currentspan<<endl;
        s1.push(itr);
    }
    


}
int main(void)
{
    int arr1[] = {12,14,15,7,15,17,5,12,10,13,20};
    stockspan(arr1,11);
    return 0;
}