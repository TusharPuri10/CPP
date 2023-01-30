#include <iostream>
#include <vector>
using namespace std;

void print(vector<string> &v)//pass reference agar kuch change nhi ho rha vector me as copying is expensive (O(n)) and copying here is of no use.
{
    cout<<"size:"<<v.size()<<endl;//O(1)
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<",";
    }
    cout<<endl;
}
int main()
{
    vector<string> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    print(v);
    return 0;
}