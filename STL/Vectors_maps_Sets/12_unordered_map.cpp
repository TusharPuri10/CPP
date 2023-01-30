// Given N strings and-Q queries.
// In each query you are given 'a string
// print frequency of that string

// N <= 10^6
// |S| <=1000
// Q <= 10^6
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i <n;i++)
    {
        string str;
        cin>>str;
        m[str]++;
    }
    int q;
    cin >> q;
    while(q--)// makes sense for using unordered_map because Q<= 10^6 moreover order ki zaroorat hai hi nhi is question me
    {
        string s;
        cin >> s;
        cout << m[s] << endl;
    }
    // for(auto &value: m)
    // {
    //     cout<<value.first<<" "<<value.second<<endl;
    // }//
    return 0;
}
// map->multimap me keys are not unique tum duplicates daal sakte ho // everything O(log n)
// competitive me kahi use nhi hota hai
// multimap<int, string> like that header file -> #inlcude<map>
// instead of multimap you can use map<int,vector<string>>