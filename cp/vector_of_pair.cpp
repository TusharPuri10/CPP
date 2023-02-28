#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>> v;// vector<pair<int,int> > v
    v.push_back(make_pair(10,20));
    v.push_back({1,2});
    v.push_back({5,6});

    for(int i=0;i<v.size();i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;

    vector<pair<int,string>> c;
    c.push_back({1,"harish"});
    c.push_back({2,"tushar"});
    c.push_back({22,"rahul"});
    c.push_back({32,"priyanshu"});
    for(auto value: c)
    {
        cout<<"Roll no: "<<value.first<<" Name: "<<value.second<<endl;
    }

    vector<pair<int,pair<int,int>>> t;
    t.push_back({1,{2,3}});
    t.push_back({2,{3,4}});
    t.push_back({3,{4,5}});

    for(auto &value: t)
    {
        cout<<value.first<<" "<<value.second.first<<" "<<value.second.second<<endl;
    }
    return 0;
}