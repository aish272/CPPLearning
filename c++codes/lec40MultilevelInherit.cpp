#include<iostream>
using namespace std;

class grandf
{
    int rollnum;
    protected:
    void getset_roll(int n)
    {
        rollnum = n;
        cout<<"The roll number is "<<rollnum<<endl;
    }
};
class father : protected grandf
{
   
    protected:
    int phy;
    int maths;
    void getset_sub(int p, int m)
    {
        phy = p;
        maths = m;
        cout<<"The marks of physics and maths are "<<phy<<" and "<<maths<<" respectively."<<endl;
    }
};

class child : protected father
{
    protected:
    int result;
    public:
    void setget()
    {
    getset_sub(100 , 100);
    getset_roll( 21);
    result =(phy+maths)/2;
    cout<<"The result is "<<result<<"%"<<endl;

    }
};
int main(void)
{
    child c1;
    c1.setget();

    return 0;
}