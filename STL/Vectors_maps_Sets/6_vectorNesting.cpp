#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int>> &v)
{
    cout<<"size:"<<v.size()<<endl;//O(1)
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<",";
        }
        cout<<endl;
    }
}

int main() // better as code is readable
{
    vector<vector<int>> v;
    int row;
    cin>>row;
    cout<<"enter values:";
    for(int i=0;i<row;i++)
    {
        int column;
        cin>>column;
        vector<int> a;
        for(int j=0;j<column;j++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        v.push_back(a);
        a.clear();
    }
    print(v);
    return 0;
}