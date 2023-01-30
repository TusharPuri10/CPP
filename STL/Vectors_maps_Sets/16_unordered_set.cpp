// Given N strings and Q queries.
// In each query you are given a string
// print yes if string is present
// else print no.
// N <= 10^6
// |S| <= 100
// Q <= 10 ^ 6

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<string> str;// O(1) saari cheeze
    // same difference as it is between map and unordered_map
    // time complexity and cannot make complex keys in unordered_set becuse there hash functions are not defined in libraries
    // if you have to still use as such then you have to make your own hash functions
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        str.insert(s);
    }
    
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        if(str.find(s) != str.end())
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
