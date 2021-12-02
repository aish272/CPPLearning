#include<iostream>
using namespace std;

// overriding. If both child and parent have functions with the same sign then the obj of the child class will execute its own func when func is called.

class parent
{
    public:
    void favmovie()
    {
        cout<<"My fav hindi movies are Bajirao Mastani and Tamasha!"<<endl;
    }
};

class child : public parent
{
    
    public:
    void favmovie()
    {
        cout<<"My fav english movies are Cars and Love, Rosie!"<<endl;
    }
};
int main(void)
{
    child c1;
    c1.favmovie();

    return 0;
}