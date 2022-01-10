#include<iostream>
using namespace std;
class invest
{
    int principal;
    int cycle;
    float roi;
    float amount;
    public:
    invest (int p, int R, int t)
    {
        roi = float(R)/100;
        cycle = t;
        principal = p;
        amount = float(principal);
        for(int i = 1 ; i<=cycle;i++)
        {
            amount = amount*(roi+1);
        }
    }

    invest (int p, float r, int t)
    {
        roi = r;
        cycle = t;
        principal = p;
        amount = float(principal);
        for(int i = 1 ; i<=cycle;i++)
        {
            amount = amount*(roi+1);
        }
    }

    invest()  //for the objects which were created but not used.They will be initialized with garbage value with the help of this constructor. If we do not do this compiler will generate an error.
    {

    }

    void show()
    {
        cout<<"The amount received after a cycle of "<<cycle<<" on "<<principal<<" is "<<amount<<endl;
    }

    

};
int main(void)
{
    invest  obj3; //this will the require empty constructor
    int p, t;
    float r;
    int R;
    cout<<"Enter for first investment in the order of p  r  t."<<endl;
    cin>>p>>r>>t;
    invest obj1 = invest (p,r,t);
    obj1.show();

    cout<<"Enter for second investment in the order of p  R  t"<<endl;
    cin>>p>>R>>t;
    invest obj2 (p,R,t);
    obj2.show();





    return 0;
}
