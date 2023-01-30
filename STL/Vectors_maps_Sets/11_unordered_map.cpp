#include <iostream>
#include <unordered_map>
using namespace std;

void print(unordered_map<int,string> &m)//reference
{
    cout<<m.size()<<endl;
    for(auto &value: m)//O(Nlogn)
    {
        cout<<value.first<<" "<<value.second<<endl;//accessing is also O(logN)
    }
    //loop me daalne ki bhi O(nlogn)
}
int main()
{
    // 1. inbulit implementation
        // maps use trees where as unordered_maps use hash table for internal implementation
        // keys in maps are inserted on basis of comparison where as in unordered_maps hash value of each key is calculated
    // 2. time complexity
        // O(logN) -> O(1)
    // 3. valid keys
        // unordered_map<pair<int, int>, string> m; this is wrong because pair<int, int> does not have any inbuilt hash function to maintain hashtable same is true for other complez keys like vector,set.
        // where as in map<pair<int, int>, string> m; this is possbile because it is possbile to compare such complex keys like vector,set
    // 3 differences between map and unordered_map
    // rest all functions are same
    unordered_map<int,string> m;
print(m);
    m[1]="abc"; // O(1) insertion and accessing
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"gfg"});
    m[6];
    m[5]="cdf";

print(m);

    auto it2 = m.find(5);//find return iterator //O(1)
    if(it2 != m.end())
        m.erase(it2);
    
    return 0;
}