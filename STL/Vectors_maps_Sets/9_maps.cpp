#include <iostream>
#include <map>
using namespace std;

void print(map<int,string> &m)//reference
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
    //map a data structure which store key-value pair
    // int(key)  string(value)
    //  1           abc
    //  5           cdc
    //  3           acd
    // two maps- ordered and unordered
    // ordered - keys are in sorted order ( red black trees ke implementation se store hote hai internally)
    // unordered - keys are not sorted
    // maps are not continous in nature
    // we can do it++ but cannot do it=it+1
    map<int,string> m;//stored in sorted order
    //if key was string then keys will be stored in lexgraphical order(dictionary wala)
print(m);
    m[1]="abc";//insertion and accessing operation O(logn) n=current size of map but this time complexity also depend on keys
    // Red black trees me jab bhi value daalte hai toh existing values jo hoti hai trees me unse compare hota hai
    // that's why if we key is single (int,float,char) then comparing take O(1) -> O(Logn) insertion
    // if key is also a string then comparing take O(n),n=s.size() and insertion takes O(s.size().Logn) i.e O(n.logn)
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"gfg"});
    m[6];//if we only write this then for string->"" for int->0 , these values get stored at that key
    // Note: there can not be more than one key of same value/number.
    // KEYS are UNIQUE
    m[5]="cdf";
    // for(auto it=m.begin();it!=m.end();it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
print(m);

    // find returns an iterator or a 
    //constant iterator that 
    //refers to the position
    // where the key is present in the map. 
    //If the key is not present in the map 
    //container, it returns an iterator or a 
    //constant iterator which refers to map.end()

    auto it = m.find(7);//find return iterator //O(logN)//only works for keys
    if(it == m.end())
        cout<<"No such key";
    else
        cout<<it->first<<" "<<it->second<<endl;

    auto it2 = m.find(5);//find return iterator //O(logN)
    if(it2 == m.end())
        cout<<"No such string";
    else
        cout<<it2->first<<" "<<it2->second<<endl;
    
    auto it3 = m.find(3);// iterator se erase
    m.erase(it3);//whi iterator erase ho sakta hai jo exist kare else segmentation fault
    //or we could do m.erase(3); // key pe jo value hai us se erase
print(m);
    //safety check

    int x;
    cin>>x;
    auto it4 = m.find(x);
    if(it4==m.end())
        cout<<"no value";
    else
    {
        m.erase(it4);
    }
print(m);
    
    m.clear();//empty karta hai map ko
print(m);

    return 0;
}