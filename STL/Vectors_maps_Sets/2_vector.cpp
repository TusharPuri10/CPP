#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
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
    //vector and array 10^5 se jada nhi (10^7 if global) online websites
    //this limitation is basically on continous allocation of memory
    // vector -> arrays + dynamic size + so many inbuilt features
    //int a[10]; // fixed size
    vector<int> a;//size currently 0 // we can change its size
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x); //O(1) end me daal dega
        print(a);
    }
    cout<<"Finally\n";
    print(a);
    return 0;
}