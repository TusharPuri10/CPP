#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin>> n;
    unordered_map<string,int> m;
    while(n--)
    {
        string str;
        cin>>str;
        auto it = m.find(str);
        if(it == m.end())
        {
            cout << "OK\n";
            m[str]++;
        }
        else{
            m[str]++;
            cout<<it->first <<(it->second)-1<<endl;
        }
    }
    return 0;
}