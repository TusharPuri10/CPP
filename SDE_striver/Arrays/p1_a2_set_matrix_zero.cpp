#include <iostream>
#include <vector>
using namespace std;

// Brute force approach of using -1 // O(n*m*(n+m)) = O(n^3)

void set_zero(vector<vector<int>>& arr)
{
    int row=arr.size();
    int col=arr[0].size();
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j] == 0)
            {
                for(int i1=0;i1<row;i1++)//column
                {
                    if(arr[i1][j]!=0)
                        arr[i1][j]=-1;
                }
                for(int j1=0;j1<col;j1++)//row
                {
                    if(arr[i][j1]!=0)
                        arr[i][j1]=-1;
                }
            }
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j] == -1)
                arr[i][j] = 0;
        }
    }
}
int main()
{
    vector<vector<int>> arr = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    set_zero(arr);
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[0].size();j++)
        {
            cout<<arr[i][j]<<",";
        }
        cout<<"\n";
    }
    return 0;
}