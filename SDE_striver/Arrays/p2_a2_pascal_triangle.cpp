#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v(n);
    for(int i=0;i<n;i++)
    {
        v[i].resize(i+1);
        v[i][0]=1;
        v[i][i]=1;
        for(int j=1;j<i;j++) // i=2 2,1->1,0 + 1,1  i=3 3,1->2,0 + 2,1 3,2->2,1 + 2,2
        {
            v[i][j] = v[i-1][j-1] + v[i-1][j];
        }
    }
    //pattern generating
    int counter=n-1;
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<counter;k++)
        {
            cout<<" ";
        }
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<",";
        }
        for(int k=0;k<counter;k++)
        {
            cout<<" ";
        }
        cout<<endl;
        --counter;
    }
    return 0;
}