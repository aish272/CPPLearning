#include<iostream>
using namespace std;

class student
{
    protected:
    int rollnum;
    public:
    void setroll(int r)
    {
        rollnum = r;
    }

    void printroll(void)
    {
        cout<<"The roll number is "<<rollnum<<endl;
    }
};

class testmarks : virtual public student // Can also be written as public  virtual.
{
    protected:
    float history;
    float music;
    public:
    void setmarks(float h, float m)
    {
        history = h;
        music  = m;
    }
    float total0;
    void settotal0()
    {

     total0 = history+music;

    }
    void get_marks()
    {
        cout<<"The marks in history and music are "<<history<<" and "<<music<<" respectively."<<endl;
    }

} ;
class sportsmarks : virtual public student // Can also be written as public  virtual.
{
    protected:
    float chess;
    float basketball;
    public:
    void setsports_marks(float h, float m)
    {
        chess = h;
        basketball  = m;
    }
    float total1 ;

    void settotal1()
    {

     total1 = chess+basketball;

    }
    void fetch_marks()
    {
        cout<<"The marks in chess and basketball are "<<chess<<" and "<<basketball<<" respectively."<<endl;
    }

} ;

class resulttime: public testmarks, public sportsmarks
{
    public:
    void result_dikhao()
    {
        printroll();
        get_marks();
        fetch_marks();
        cout<<total1<<total0<<endl;
        cout<<"The result is taaahhddaaa "<<endl<<"Here it comes..."<<endl<<(total1+total0)<<endl;
        
    }
};



int main(void)
{
    resulttime r1;
    r1.setroll(21);
    r1.setmarks(97,100);
    r1.setsports_marks(99,85);
    r1.result_dikhao();
    return 0;
}