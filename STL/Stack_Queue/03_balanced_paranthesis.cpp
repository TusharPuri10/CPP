#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<char> s;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='(' || str[i]=='[' || str[i]=='{')
            s.push(str[i]);
        else if((s.empty()==0)&&((str[i]==')'&& s.top()=='(')||(str[i]==']'&& s.top()=='[')||(str[i]=='}'&& s.top()=='{')))
        {
            s.pop();
        }
        else
        {
            s.push(str[i]);
        }
    }
    if(s.empty()==1)
        cout<<"balanced";
    else
        cout<<"not balanced";
    return 0;
}