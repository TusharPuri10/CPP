// Given N strings, print unique strings
// in lexiographical order
// N <= 10^5
// |s| <=100000
// unique chahiye aur frequency ki baat ki nhi so why use maps instead we should use sets
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<string> str;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        str.insert(s);
    }
    for(auto &value: str)
    {
        cout<<value<<endl;
    }
    return 0;
}