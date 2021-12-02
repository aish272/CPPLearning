#include<iostream>
using namespace std;
int main(void)
{
    
    //BREAK STATEMENT
    for(int i=1;i<4;i++)
    {
        if(i%3==0)
        {
            break;
        }
        cout<<"i  = "<<i<<endl;
    }

    //CONTINUE STATEMENT
    int j=0;
    while(j<10)
    {
        
        j++; 


        if(j%2==0)  //if 'i' had been put in place of 'j', it would have produced an error because 'i' was declared inside upper for loop.
        {
            continue;
        } 
        cout<<"j = "<<j<<endl; 
        //j++ if this was put after continue then after 2, j could not have been incremented as continue would have not allowed to execute any statement after it. The loop then becomes an infinite loop.
    }

    return 0;
}