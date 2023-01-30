#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &v)//pass reference agar kuch change nhi ho rha vector me as copying is expensive (O(n)) and copying here is of no use.
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
    vector<int> v(10);
    print(v);
    v.push_back(7);//last me daalta hai O(1)
    print(v);

    vector<int> a(5,3);
    print(a);
    a.pop_back();//last se nikalta hai O(1)
    print(a);

    vector<int> b = a;// O(n) //copy kardega // a me change does not effect b
    //vector<int> &b = a; for refernce
    // copy aur reference ka dhyan while using vector
    b.push_back(12);
    print(a);
    print(b);
    return 0;
}