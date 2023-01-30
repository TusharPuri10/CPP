//extra features of iterators introduced in c++11
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

    vector<int> ::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<",";
    }
    cout<<endl;
    
    //auto keyword
    //auto a = 2; automatically determines that 2 must be int
    //auto a = 3.4; automatically determines that 2 must be float

    //vector<int> ::iterator it;
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<",";
    }
    cout<<endl;

    for(int value: v)//copy ho rha hai
    {
        cout<<value<<" ";
    }
    cout<<endl;

    for(int value: v)
    {
        ++value;//iska koi fayeda nhi
    }
    for(int value: v)//copy ho rha hai // to get actual value use reference
    {
        cout<<value<<" ";
    }
    cout<<endl;

    //by reference
    for(int &value: v)
    {
        ++value;
    }
    for(int value: v)
    {
        cout<<value<<" ";
    }
    cout<<endl;

    // iterators me toh actual value pe hi point kar rha hota hai iterator
    for(it=v.begin();it!=v.end();it++)
    {
        ++(*it);
    }
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<",";
    }
    cout<<endl;

    //for pair
    vector<pair<int,int>> vp = {{1,2},{2,3},{3,4},{4,5}};
    for(pair<int,int> &value: vp)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    cout<<endl;
    //auto keyword
    for(auto &value: vp) // best method
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    cout<<endl;
    return 0;
}