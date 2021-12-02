#include<iostream>
using namespace std;

class normal
{
    int n;
    static int count;
    public:
    normal ()
    {
        
        n = count;
        cout<<"Constructor called for object "<<n<<endl;
        count++;
    }

    ~normal()
    {
        cout<<"Destructor called for object "<<n<<endl;
    }
};
int normal :: count =1;
int main(void)
{
   cout<<"We are in main"<<endl;
   normal obj1;
   {
       cout<<"Entered the block."<<endl;
       normal obj2;
       normal obj3;
       cout<<"Existing the block"<<endl;

   } 
   cout<<"Back to main."<<endl;
    return 0;
}

