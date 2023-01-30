// maps(key-value) me se value wala part hata do you will get sets
#include <iostream>
#include <set>
using namespace std;

void print(set<string> &s)
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
{
    set<string> s;//stores unique elements in sorted order
    s.insert("abc");// log(n) insert
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");

    // map me value access karni hoti thi kisi key pe toh
    // m[key]
    // m.find(key) return iterator
    print(s);
    // set<string> ::iterator it = s.find("abc");
    auto it = s.find("abcd");//return iterator // O(log(n)) access
    if(it != s.end())// always check
    {
        s.erase(it);
    }
    print(s);
    s.erase("abc");
    print(s);


    return 0;
}