#include <iostream>
#include<vector>
#include<algorithm>

using namespace std; 
class catdog
{
    public:
    int animals, cat, dog, catextra;
    
    string arrange;
    vector <char> record;
    
    void setcatdog ()
    {
        cin>>animals>>dog>>cat>>catextra;
    }
    void setarrange()
    {
        cin>>arrange;
    }
    void feed()
    {
        string:: iterator it;
        string:: iterator it2;
       
        for (it2 = arrange.begin(); it2 != arrange.end();it++)
        {
                record.push_back(*it2);
        }
        reverse(record.begin(),record.end());
      
     for (it = arrange.begin(); it != arrange.end();it++)
     {
        if((*it)=='C')
        {
            if(cat>0)
            {
            cat-=1;
            record.pop_back();
            }
            else
            break;

        }
        else if((*it)=='D')
        {
            if(dog>0)
            {
            dog -=1;
            cat += catextra;
            record.pop_back();
            }
            else
            break;
        }
     }

        
     }
    bool check()
        {
            vector<char>::iterator ptr;
            if(record.empty())
            {
                return true;
            }
            else
            {
             for (ptr = record.begin(); ptr != record.end();ptr++)
             {
                 if((*ptr)=='D')
                 {
                     return false;
                 }
                 
             }
             return true; //after checking the entire list
            }
        }

    };



int main(void)
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        catdog obj1;
        obj1.setcatdog();
        obj1.setarrange();
        obj1.feed();
        bool result = obj1.check();
        if (result)
        {
            cout<<"Case #"<<i+1<<": YES"<<endl;
        }
        else
        {
             cout<<"Case #"<<i+1<<": NO"<<endl;
        }

    }
    return 0;
}
