#include <iostream>
#include <vector>
using namespace std;

// optimised Brute force approach of using two extra array

void set_zero(vector<vector<int>>& arr) // O(2*(n*m)) = O(n^2)
{
    int row=arr.size();
    int col=arr[0].size();
    vector<int> row_arr(row,1);// there is no harm in being explicit about what you want the code to do
    vector<int> col_arr(col,1);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j] == 0)
            {
                row_arr[i]=0;
                col_arr[j]=0;
            }
        }
    }
    // for(int i=0;i<row;i++)
    // {
    //     if(row_arr[i]==0)
    //         for(int j=0;j<col;j++)
    //             arr[i][j]=0;
    // }
    // for(int j=0;j<col;j++)
    // {
    //     if(col_arr[j]==0)
    //         for(int i=0;i<row;i++)
    //             arr[i][j]=0;
    // }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(row_arr[i]==0 || col_arr[j]==0)
                arr[i][j]=0;
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