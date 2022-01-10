#include <iostream>
using namespace std;
class base1
{
    int a;

public:
    base1(int a1)
    {
        a = a1;
        cout << "Base1 constructor is running." << endl;
    }
    void print()
    {
        cout << "The value of a is " << a << endl;
    }
};

class base2
{
    int b;

public:
    base2(int b1)
    {
        b = b1;
        cout << "Base2 constructor is running." << endl;
    }
    void print()
    {
        cout << "The value of b is " << b << endl;
    }
};

class child : public base2, public base1
{
    int c;

public:
    child(int a1, int b1, int c1) : base2(b1), base1(a1) //decides the order of execution of constructor
    {
        c = c1;
        cout << "child constructor is running." << endl;
    }
    void print()
    {
        base1 ::print();
        base2 ::print();
        cout << "The value of c is " << c << endl;
    }
};

int main(void)
{
    child obj(2, 3, 45);
    obj.print();

    return 0;
}