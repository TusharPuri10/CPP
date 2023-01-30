// maps(key-value) me se value wala part hata do you will get sets
#include <iostream>
#include <set>
using namespace std;

void print(multiset<string> &s)
{
    cout<<"print "<<s.size()<<endl;
    for(string value: s) //best
    {
        cout<<value<<endl;
    }
    // for(auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout<< (*it) << endl;
    // }

}
int main()
{   //set -> multiset ... allows similar multiple kys
    multiset<string> s;//stores unique elements in sorted order
    s.insert("abc");// log(n) insert
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");
    s.insert("zsdf");

    // map me value access karni hoti thi kisi key pe toh
    // m[key]
    // m.find(key) return iterator
    print(s);
    // set<string> ::iterator it = s.find("abc");
    auto it = s.find("abc");//return iterator // O(log(n)) access // if duplicate then pahle value ka iterator return karega
    if(it != s.end())// always check
    {
        s.erase(it);// delete element at that iterator
    }
    print(s);

    s.erase("zsdf");// delete all zsdf elements in set // internally ye bhi iterator find karta rehta hai aur tab tak find karta hai tab tak isko iterator milna band nhi ho jata
    print(s);
    
    return 0;
}