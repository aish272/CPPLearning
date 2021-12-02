#include<iostream>
using namespace std;

class movie
{
    static int movienum;
    int rating;

    public:
    void setrating()
    {
        cout<<"What's your rating for this movie out of 5? "<<endl;
        cin>>rating;
    }

    void getrating()
    {
         cout<<"The movie rating is "<<rating<<endl;
         movienum++;
    }

    static void getmovienum()  //static function. This can only access static func and variables.
    {
        cout<<"For Movie Number: "<<movienum<<endl;
    }
};

int movie :: movienum =1; //default value is zero. It can be changed here.

int main(void)
{
    movie k3g, ddlj;

    movie ::getmovienum();
    k3g.setrating();
    k3g.getrating();

    movie::getmovienum();
    ddlj.setrating();
    ddlj.getrating();


    return 0;
}