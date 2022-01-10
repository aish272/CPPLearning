#include <iostream>
using namespace std;
// checking if we can use cin inside a constructor to take input for objects when it is created.
class normal
{
    int n;

public:
    normal()
    {
        cout << "Enter the value: ";
        cin >> n;
        cout << "Value is " << n << endl;
    }
    };

    int main(void)
    {

        normal obj1;
        normal obj2;
        normal obj3;

        return 0;
    }
