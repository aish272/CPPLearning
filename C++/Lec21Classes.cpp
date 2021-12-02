#include<iostream>
using namespace std;

class employee
{
    private:
    int phonenum;
    int salary;

    public:
    int grade;
    string desig;

    void print ()  // defining function inside the class
    {
        cout<<"Phone number of employee is "<<phonenum<<endl;
        cout<<"Salary of employee is "<<salary<<endl;
        cout<<"Grade of employee is "<<grade<<endl;
        cout<<"Designation of employee is "<<desig<<endl;
        
    }
    
    void setdata(int ph, int sal);


};

void employee:: setdata (int ph, int sal) // defining function outside class
{
    phonenum = ph;
    salary = sal;
}
int main(void)
{
    employee Rajma;
    Rajma.desig = "Chiller";
    Rajma.grade = 3;

    //Rajma.sal = 12*5; --> It will throw an error because sal is private and cannot be accessed by another function.

    Rajma.setdata(660, 12*5);
    Rajma.print();
    return 0;
}
/*


class food
{
    //properties and methods;
} f1, f2;                    

f1 and f2 are objects. This is another way to declare objects.
*/