#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {2,3,4,5,6};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<",";
    }
    cout<<endl;
    vector<int> ::iterator it = v.begin();
    // cout<<*it<<endl;//2
    // cout<<*(it+1)<<endl;//3
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<",";
    }
    cout<<endl;
    // There is a difference between it++ and it=it+1
    // it++ sets it on next iterator which is correct for maps
    // it=it+1 sets on next location
    // here, in vecotr, it++ and it=it+1 will give same result
    // as vector is continous memory allocation
    vector<pair<int,int>> vp = {{1,2},{2,3},{3,4},{4,5}};
    vector<pair<int,int>> ::iterator it2;
    for(it2=vp.begin();it2!=vp.end();it2++)
    {
        //cout<<(*it2).first<<" "<<(*it2).second<<endl;
        cout<<it2->first<<" "<<it2->second<<endl;
    }
    return 0;
}