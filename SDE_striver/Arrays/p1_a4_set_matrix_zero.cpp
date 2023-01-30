#include <iostream>
#include <vector>
using namespace std;

//  MORE optimised approach of wothout using two extra array

void set_zero(vector<vector<int>>& arr) //
{
    int row=arr.size();
    int col=arr[0].size();
    bool rowCheck = false;
    bool colCheck = false;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j] == 0)
            {
                if(i==0)
                    colCheck = true;
                if(j==0)
                    rowCheck = true;
                arr[i][0]=0;
                arr[0][j]=0;
            }
        }
    }
    for(int i=row-1;i>=0;i--)
    {
        for(int j=col-1;j>=0;j--)
        {
            if(arr[0][j]==0 || arr[i][0]==0)
            {
                if((i==0 && colCheck==false)||(j==0 && rowCheck==false))
                    goto end;
                arr[i][j]=0;
            }
            end:{}
        }
    }
}
int main()
{
    vector<vector<int>> arr = {{1,0,1,1},{3,0,0,2},{1,3,1,5}};
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