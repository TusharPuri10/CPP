#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<char,char> m;
    for(int i=0;i<5;i++)
    {
        char x,y;
        cin>>x;
        cin>>y;
        m[x]=y;
    }
    char z;
    cin>>z;
    if(m[z])
        cout<<"it is in unordered map";
    else
        cout<<"it is not in unordered map";
    return 0;
}