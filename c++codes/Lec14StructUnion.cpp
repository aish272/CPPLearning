#include<iostream>
using namespace std;

//structure
typedef struct burger
{
    char patty;
    int CheeseSlice;

}bur;

typedef union favourite
{
    char favfood;
    int money;
}fav;

int main(void)
{
    bur kormaburger = {'a',2};
    cout<<"Patty "<<kormaburger.patty<<"\n"<<"Number of cheese slices "<<kormaburger.CheeseSlice<<endl;
    fav at25;
    at25.favfood = 'c';
    cout<<"Value of money in union favourite "<<at25.money<<endl;

    //enum 
    enum menu {pizza=101, chaat, icecream};
    menu allyours = chaat;
    cout<<"value of allyours "<<allyours;
    
    return 0;
}