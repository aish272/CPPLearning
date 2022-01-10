#include<iostream>
using namespace std;

//Ambiguity Resolution
class base1
{
    public:
    void favmovie()
    {
        cout<<"My fav hindi movies are Bajirao Mastani and Tamasha!"<<endl;
    }
};

class base2
{
    
    public:
    void favmovie()
    {
        cout<<"My fav english movies are Cars and Love, Rosie!"<<endl;
    }
};

class fav: public base1, public base2
{
    public:
    void favourite()
    {
        base1:: favmovie(); // telling the compiler to call the func of base1 as both of them have the same name.
    }
};



int main(void)
{
    fav myfav;
    myfav.favourite();
    return 0;
}