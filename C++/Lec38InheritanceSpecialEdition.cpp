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

class derived : public base
{
    public:
    int data_hai;
    void setdata()
    {
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
    d1.setkaro();
    d1.setdata();
    d1.show();
    
    return 0;
}