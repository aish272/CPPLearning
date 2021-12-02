#include<iostream>
using namespace std;
class shop
{
    int itemid[10];
    int itemprice[10];
    int counter; //int counter =0; This worked too when I removed void initcounter(void)
    public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setprice(void);
    void print(void);
   
};
void shop ::  setprice()
{
    cout<<"Enter the id for item number "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"Enter the price for item number "<<counter+1<<endl;
    cin>>itemprice[counter];
    counter++;
}

void shop:: print()
{
    for(int i=0;i<counter;i++)
    {
        cout<<"The item is "<<itemid[i]<<"and the price is "<<itemprice[i]<<endl;
    }
}
int main(void)
{
   shop s1;
   s1.initcounter();
   s1.setprice();
   s1.setprice();
   s1.setprice();
   s1.print();

   shop s2;
   s2.initcounter();
   s2.setprice();
   s2.setprice();
   s2.setprice();
   s2.print();

    return 0;
}