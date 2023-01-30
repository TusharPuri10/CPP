#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int> m;
    int q;
    cin>>q;
    while(q--)
    {
        string name;
        int type,marks;
        cin>>type;
        if(type==1)
        {
            cin>>name>>marks;
            m[name] += marks;
        }
        else if(type==2)
        {
            cin>>name;
            m[name] = 0;
        }
        else if(type==3)
        {
            cin>>name;
            cout<<m[name]<<endl;
        }
    }
    return 0;
}