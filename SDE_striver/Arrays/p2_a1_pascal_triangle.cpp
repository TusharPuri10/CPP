#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v;
    vector<int> prev_level;
    vector<int> current_level = {1};
    for(int i=0;i<n;i++)
    {
        if(i>0)
        {
            current_level.push_back(1);
            for(int j=0;j<i-1;j++) // i=2 0->0,1  i=3 0->0,1 1->1,2
            {
                current_level.push_back(prev_level[j]+prev_level[j+1]);
            }
            current_level.push_back(1);
        }
        v.push_back(current_level);
        prev_level = current_level;
        current_level.clear();
    }
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