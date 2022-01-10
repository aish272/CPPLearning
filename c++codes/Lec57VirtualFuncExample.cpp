#include <iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string t, float r)
    {
        title = t;
        rating = r;
    }
    virtual void display()
    {
        cout << "virtual class function ran" << endl;
    }
};

class CWHVideo : public CWH
{
    float videolength;

public:
    CWHVideo(string t, float r, float vl) : CWH(t, r)
    {
        videolength = vl;
    }

    void display()
    {
        cout << "The title is " << title << endl;
        cout << "The rating is " << rating << endl;
        cout << "The video length is " << videolength << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string t, float r, int w) : CWH(t, r)
    {
        words = w;
    }

    //if this remains commented then virtual class function will run.

    /*void display()
    // {
    //     cout<<"The title is "<<title<<endl;
    //     cout<<"The rating is "<<rating<<endl;
    //     cout<<"The word count is "<<words<<endl;
    } */
};
int main(void)
{
    CWHVideo v1("Intro", 5, 10);
    CWHText t1("Basics", 5, 300);
    CWH *baseptr[2];
    baseptr[0] = &v1;
    baseptr[1] = &t1;
    baseptr[0]->display();
    baseptr[1]->display();

    return 0;
}