#include<iostream>
#include<string>
using namespace std;

class binary
{
    string s;
    void check_bin(void);

    public:
    void read(void);
    void ones_complement(void);
    void display();

};
void binary :: read ()
{
    cout<<"Enter the binary number: "<<endl;
    cin>>s;
}

void binary :: check_bin ()
{
   for(int i = 0; i<s.length();i++)
   {
       if((s.at(i)!='0')&& (s.at(i)!='1'))
       {
           cout<<"Not a binary Number.";
           exit(0);
       }
   }
    
}

void binary::ones_complement(void)
{
    check_bin(); 
    
    // can call a function inside another function from the same class without using the scope resolution.
    
    for(int i = 0;i<s.length();i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
}

void binary ::display(void)
{
    cout<<"The binary number is "<<s<<endl;
}

int main(void)
{
    binary mybin;
    mybin.read();
    mybin.display();
    mybin.ones_complement();
    mybin.display();
    

    
    return 0;
}