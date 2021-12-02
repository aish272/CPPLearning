#include <iostream>
#include<stack>
using namespace std; 

bool balancedPara(string p)
{
    bool funcpair(char first, char two);
    stack<char> s;
    for(int i=0;i<p.length();i++)
    {
        if(p[i]=='{'||p[i]=='['||(p[i]=='('))
        {
            s.push(p[i]);
        }

        else
        {
            if(s.empty())
                return false; 

                // the list will be empty if all the pairs are popped out and there are still elements in the string but they can't be pushed in the stack because they are not opening brackets. In that case stack will be empty and we will have to return false. {}a} because of a loop will run but stack will be empty.

            else if(funcpair(s.top() , p[i]))
            {
                s.pop();
                continue; // continue to next oteration without returning false.
            }
            return false; //if pair does not match then return false.
        }
    }
    return s.empty(); // the loop has executed till the end. If there are no elements return true. There is a possibility that the stack has pushed an opening bracket which was at the end of the string.
} 

bool funcpair(char first, char two)
{
    return((first=='('&& two==')') || (first=='['&& two==']') || (first=='{'&& two=='}'));
}
int main(void)
{
    string s = "{}()";
    string s1 = "{(}";
    string s2 = "(){";
    string s3 = "(){";
    cout<<balancedPara(s)<<endl;
    cout<<balancedPara(s1)<<endl;
    cout<<balancedPara(s2)<<endl;
    cout<<balancedPara(s3)<<endl;

    return 0;
}