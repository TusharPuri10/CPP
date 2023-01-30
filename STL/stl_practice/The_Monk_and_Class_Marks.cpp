#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main()
{
   int test;
   cin>> test;
    map<int, multiset<string>> m;//two people having same name and same marks can exist
   while(test--)
   {
      int marks;
      string name;
      cin>> name >> marks;
      m[(-1)*marks].insert(name);
   }
    for(auto &marks_list: m)
    {
        for(auto &name_list : marks_list.second)
            cout<<name_list<<" "<< (marks_list.first)*(-1) << endl;
    }
    return 0;
}