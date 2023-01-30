#include <iostream>
#include <vector>
using namespace std;

void print(vector<pair<int,int>> &v)//pass reference agar kuch change nhi ho rha vector me as copying is expensive (O(n)) and copying here is of no use.
{
    cout<<"size:"<<v.size()<<endl;//O(1)
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<"-"<<v[i].second<<endl;
    }
}
int main()
{
    vector<pair<int,int>> v ={{1,1},{2,2},{3,3}};
    print(v);

    vector<pair<int,int>> v1;
    print(v1);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v1.push_back({x,y});
    }
    print(v1);
    return 0;
}