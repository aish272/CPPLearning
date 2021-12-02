#include<iostream>
using namespace std;
class base
{
    int privatehai;
    public:
    int public_hai;
    void setkaro()
    {
        privatehai= 8;
        public_hai = 9;

    }
    int getprivate()
    {
        return privatehai;
    }
};

class derived : private base
{
    public:
    int data_hai;
    
    void setdata()
    {
        setkaro(); 
        //called it here because it can't be called outside the class as it is private for derived class. It is public for base class.
        data_hai = public_hai*getprivate();
    }

    void show ()
    {
        cout<<"Private data of base "<<getprivate()<<endl;
        cout<<"Public data of base "<<public_hai<<endl;
        cout<<"Public data of derived "<<data_hai<<endl;
    }

};
int main(void)
{
    derived d1;
    //d1.setkaro(); // can't call this here. It is private for derived class.
    d1.setdata();
    d1.show();
    
    return 0;
}